/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:40:39 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 12:41:54 by peazeved         ###   ########.fr       */
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

void ft_putstr(char *str)
{
    int  len = ft_strlen(str);
    write(1, str, len);
}

int main()
{
    char *str = "ola mundo tudo bem?";
    ft_putstr(str);
    return 0;
}