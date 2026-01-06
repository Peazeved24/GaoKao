/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:18:57 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:22:19 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_atoi(char *st)
{
    int n = 0;
    int s = 1;

    while(*st == ' ' || *st == '\t')
        st++;
    if(*st == '+' || *st == '-')
    {
        if(*st == '-')
            s = -1;
        st++;
    }
    while(*st >= '0' && *st <= '9')
        n = n * 10 + (*st++ - '0');
    return (n * s);
}

int main()
{
    char *s = "0";
    printf("%i", ft_atoi(s));
    return 0;
}