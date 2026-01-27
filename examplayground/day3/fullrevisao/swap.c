/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:45:08 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:46:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a = 9;
    int b = 10;
    ft_swap(&a, &b);
    printf("%i", a);

    return 0;
}