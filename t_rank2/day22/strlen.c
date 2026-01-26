/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:58:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 12:59:15 by peazeved         ###   ########.fr       */
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

int main()
{
    char *str = "ola";
    printf("%i",ft_strlen(str));
    return 0;
}