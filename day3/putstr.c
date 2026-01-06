/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:10:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:11:43 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i])
        write(1, &str[i++], 1);
}

int main()
{
    char *str = "ola";
    ft_putstr(str);
    return 0;
}