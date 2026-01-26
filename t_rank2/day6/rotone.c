/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:01:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/27 14:04:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_rot(int c)
{
    if(c >= 'a' && c <= 'z')
        return 'a' +((c - 'a') +  1) % 26;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        while(str[i])
        {
            char result = ft_rot(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}