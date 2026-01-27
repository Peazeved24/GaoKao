/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:02:54 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:30:11 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_isspace(char c)
{
    return (c == ' ');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(ft_isspace(str[i])) // se houver no inciio.
                i++;
        if(str[i]) // enquanto n chegar ao fim.
        {
            while(str[i] != ' ' && str[i] != '\t')
            {
                write(1, &str[i++], 1);
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}