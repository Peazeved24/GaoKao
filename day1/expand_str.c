/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:52:32 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/08 17:57:05 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ');
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac  == 2)
    {
        if(!av[1])
            return 0;
        char *str = av[1];
        int s = 0;
        int e = 0;
        int f = 0;
        
        while(ft_space(str[s])) // o nosso index no espace no start.
            s++;
        e = s; // associar esse novo index ao  e.
        while(str[e])
            e++; 
        e--; // no fim.
        while(ft_space(str[e]))
            e--;
        int i = s;
        while(i<= e)
        {
            if(ft_space(str[i])) // sim eu quero ver onde esta
            {
                if(!f)
                {
                    write(1, "   ", 3);
                    f = 1;
                }
            }
            else
            {
                ft_putchar(str[i]);
                f = 0;
            }
            i++;
        }

    }
    write(1, "\n", 1);
    return 0;   
}