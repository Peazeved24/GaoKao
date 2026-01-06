/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revwstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:22:25 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/30 17:43:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    int i = 0;
    char *str = av[1];
    int flag = 1;
    if(ac == 2)
    {
        while(str[i])
            i++; // no fim !!! - 
        while(i >= 0) // coracao - comeco do meu fim e vou ate ao inicio.
        {
            while(i >= 0 && ft_space(str[i])) // estado do incio.
                i--; // incio da minha U.P.
            int end = i;
            while(i >= 0 && !ft_space(str[i]))
                i--;
            int start = i + 1; // aqui ja marca o incio da U.P.
            if(!flag)
                  write(1, " ", 1);
            while(start <= end)
                write(1, &str[start++], 1);
            flag = 0;
        }
    }
    write(1, "\n", 1);
    return 0;
}
/*

        "ola mundo tudo"
*/