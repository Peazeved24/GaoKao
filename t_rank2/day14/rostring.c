/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:43:25 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 21:14:51 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    char *s = av[1];
    int f = 0;
    
    while(ft_space(s[i]))
        i++;
    int start = i; // inicio da primmeira palavra 
    
    while(!ft_space(s[i])) // fim da primeira palavra.
        i++;
    int end = i;
    
    while(s[i]) // estou a percorrer a string do fim da minha string agora.
    {
        if(!ft_space(s[i])) // se for um char imprime.
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
    write(1, "\n" ,1);
    return 0;
}