/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:16:34 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 16:19:05 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_am(int c)
{
    if(c >= 'a' &&  c <= 'z')
        return 'z' - (c - 'a');
    return 0;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i])
        {
            int r = ft_am(str[i]);
            write(1, &r, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}