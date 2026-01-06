/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:19:55 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/27 15:05:14 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return i;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int len = ft_strlen(av[1]);
        int i = 0;
        int j = 0;
        int f = 0;
        int count = 0;
        char *s1 = av[1];
        char *s2 = av[2];

        while(s1[i] && *s2)
        {
            if(s1[i] == *s2)
            {
                i++;
            }
            s2++;
        }
        if(s1[i] == '\0')
            write(1, "1", 1);
        else
             write(1, "0", 1);
    }
    write(1, "\n", 1);
    return 0;
}