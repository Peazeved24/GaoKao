/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:51:18 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/23 14:02:05 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_alpha(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        return  'z' - (c - 'a');
    }
    else if(c >= 'A' && c <= 'Z')
    {
       return  'Z' - (c - 'A');
    }
    else
        return c;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        while(str[i])
        {
            char result = ft_alpha(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n" ,1);
    return 0;
}