/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:19:35 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:25:29 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_atoi(char *str)
{
    int n = 0;
    int s = 1;

    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            s = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return n *s;
}

int main()
{
    char *str = "#97";
    printf("%i", ft_atoi(str));
    return 0;
}