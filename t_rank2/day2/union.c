/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 13:44:40 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/09 13:58:25 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


void ft_putchar(char c)
{
    write(1, &c , 1);
}

int main(int ac ,char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        int ascii[256] = {0};
        char *s1= av[1];
        char *s2 = av[2];

        if(!s1 || !s2)
            return 1;
            
        while(s1[i])
        {
            if(ascii[s1[i]] == 0)
            {
                ascii[s1[i]] = 1;
                ft_putchar(s1[i]);
            }
            i++;
        }
        while(s2[j])
        {
            if(ascii[s2[j]] == 0)
            {
                ascii[s2[j]] = 1;
                ft_putchar(s2[j]);
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}