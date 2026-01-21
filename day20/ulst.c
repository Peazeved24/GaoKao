/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:48:51 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/20 12:51:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i])
        {
            if(ft_lower(str[i]))
                str[i] = str[i] - 32;
            else if(ft_upper(str[i]))
                str[i] = str[i] + 32;
            write(1, &str[i++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}