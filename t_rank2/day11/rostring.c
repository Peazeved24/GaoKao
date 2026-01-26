/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:57:55 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 13:18:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' '|| c== '\t');
}

int main(int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n",1 );
        return 0;
    }

    int i = 0;
    char *s = av[1];
    int f = 0;
    
    while(ft_space(s[i])) // espacos do incio -- removidos.
        i++;
    int start = i;

    while(!ft_space(s[i]))
        i++;
    int end = i; //fim da minha primeira palavra;

    while(s[i])
    {
        if(!ft_space(s[i]))
        {
            write(1, &s[i], 1);
            f = 1;
        }
        else if(f) 
        {
            write(1, " ", 1);
            f = 0;
        }
        i++;
    }
    if(end > start) 
        write(1, " ", 1);
    while(start <= end)
        write(1, &s[start++], 1);
    write(1, "\n", 1);
}

/*
    "ola  mundo";
*/