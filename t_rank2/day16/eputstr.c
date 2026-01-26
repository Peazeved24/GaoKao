/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eputstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:59:16 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/07 21:09:44 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if(ac ==  2)
    {
        int i = 0;
        char *s = av[1];
        int f = 0;

        while(ft_space(s[i]))
            i++;
        int start = i;

        while(s[i])
            i++;
        i--;
        while(ft_space(s[i]))
            i--;
        int end = i+1;

        while(start < end)
        {
            while(s[start] && ft_space(s[start]))
            {
                start++;
                f = 1;
            }
            if(f)
            {
                write(1, " ", 1);
                f = 0; 
            }  
            write(1, &s[start++], 1);
        }
    }
    return 0;
}