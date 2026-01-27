/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cameltosnake.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:04:55 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/23 14:22:00 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
    int i = 0;
    char *str = av[1];

    while(str[i]) // enquanto percorre a string.
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            write(1, "_", 1);
        }
        write(1, &str[i], 1);
        i++;
    }
    return 0;
}