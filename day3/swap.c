/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:08:24 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:09:46 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


void ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int  main()
{
    int a = 1;
    int b = 2;

    ft_swap(&a, &b);
    printf("%i-%i", a, b);
}