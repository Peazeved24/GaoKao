/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:43:49 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:00:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c =='\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
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
        int end = i;
        
        while(start <= end) // escrever ela trim
        {
            if(ft_space(s[start]))
            {
                while(start <= end && ft_space(s[start]))
                    start++;
                write(1, "   ", 3);
            }
            else
            {
                write(1, &s[start], 1);
                start++;       
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
