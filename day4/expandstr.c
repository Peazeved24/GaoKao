/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:23:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/24 16:32:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_space(char c)
{
    return (c == ' '|| c == '\t');
}

void ft_puthcar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i] && ft_space(str[i])) // removo do inicio.
            i++;
        int start = i; // guarda o meu inicio.
        while(str[i])
            i++;
        i--;
        while(i >= 0 && ft_space(str[i])) // sem espacos no fim.
            i--;
        int end = i; // fim sem espacos
        while(start <= end) // enquanto a string n chega ao fim 
        {
            if(ft_space(str[start]))
            {
                while(start <= end && ft_space(str[start]))
                    start++;
                write(1, "   ", 3);
            }
            else
            {
                ft_puthcar(str[start]);
                start++;   
            }
        }
        
        
    }
    write(1, "\n", 1);
}