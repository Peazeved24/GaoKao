/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:36:19 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/24 14:41:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "struct.h"

int ft_atoi(const char *str)
{
    int n = 0;
    int s = 1;

    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            s = -1;
        *str++;
    }
    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return (n *s);
}

int main()
{
    char a[] = "9";
    printf("%i\n", ft_atoi(a));
    printf("%i", atoi(a));
    return 0;
}