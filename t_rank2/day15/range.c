/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:22:29 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:46:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_abs(int n)
{
    if(n < 0)
        return -n;
    return n;
}

int     *ft_range(int start, int end)
{
    int size = ft_abs((end - start) + 1);
    int *ar; // por valor dentro disto
    int i = 0;

    ar = malloc(sizeof(int) *  size);
    if(!ar)
        return NULL;
    while(i < size)
    {
        ar[i++] = start;
        if(start < end)
            start++;
        else
            start--;
    }
    return ar;
}

int main()
{
    int i = 0;
    int a = -1;
    int b = 10;
    int size = ft_abs(a-b) + 1;
    int *ar =ft_range(a, b);

    while(i<size)
        printf("%i$$", ar[i++]);
    return 0;
}