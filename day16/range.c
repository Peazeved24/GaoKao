/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:18:37 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/07 21:23:29 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_abs(int n)
{
    if(n < 0)
        n = -n;
    return n;
}

int     *ft_range(int start, int end)
{
    int len = ft_abs(start - end) + 1;
    int i = 0;
    int *ar = malloc(sizeof(int) * len);
    if(!ar)
        return NULL;

    if(start > end)
    {
        while(start >= end)
        {
            ar[i++] = start--;
        }
    }
    else
        while(start <= end)
        {
            ar[i++] = start++;
        }
    return ar;
}

int main()
{
    int i = 0;
    int s = -1;
    int e = 2;
    int len = ft_abs(s - e) + 1;
    int *ar = ft_range(s, e);

    while(i < len)
    {
        printf("%i", ar[i++]);
    }
}