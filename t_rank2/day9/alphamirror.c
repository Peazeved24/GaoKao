/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:12:14 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/30 16:15:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
int ft_am(int c)
{
    if(c >= 'a' && c <= 'z')
        return 'z' - (c - 'a') % 26;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        while(str[i])
        {
            char result = ft_am(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}