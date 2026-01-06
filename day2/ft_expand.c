/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:00:30 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/09 14:48:31 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c ,1);
}
int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int b = 0;
        int end = 0;
        char *str = av[1];
        int f = 0;
        
        if(!str)
            return 1;
        
        while(ft_space(str[b]))
            b++;
        end = b;
        while(str[end])
            end++;
        end--;
        while(end >= b && ft_space(str[end]))
            end--;
        i = b;
        while(i <= end)
        {
            if(!ft_space(str[i]))
            {
                ft_putchar(str[i]);
                f = 0;
            }
            if(ft_space(str[i]))
            {
                if(f == 0)
                {
                    write(1, "+++", 3);
                    f = 1;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}