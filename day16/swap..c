/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap..c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:53:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/07 20:55:35 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 10;
    int b = 90;
    ft_swap(&a, &b);
    printf("%i\n%i",a, b);
    return 0;
}