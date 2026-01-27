/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:57:54 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 17:08:13 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

void ft_hidenp(char *s1, char *s2)
{
    int i = 0;
    int len = ft_strlen(s1);
    while(s1[i] && *s2)
    {
        if(s1[i] == *s2)
            i++;
        s2++;
    }
    if(i == len)
        write(1, "1", 1);
    else
        write(1, "0", 1);

}


int main(int ac, char **av)
{
    if(ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];

        ft_hidenp(s1, s2);
    }
    write(1, "\n", 1);
    return 0;
}