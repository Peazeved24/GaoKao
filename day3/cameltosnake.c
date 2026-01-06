/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cameltosnake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:53:28 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 01:12:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_cc(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *s1 = av[1];
        int i = 0;
        int f =1;
        while(s1[i])
        {
            char c = s1[i];
            if(c >= 'A' && c <= 'Z')
            {
                if(i > 0)
                    ft_cc('_');    
                c = c + 32;
            }
            ft_cc(c);
            i++;
        }
    }
    return 0;
}

    