/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortintab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:00:31 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 17:03:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_swap(int *a , int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
    int f = 1;
    int i = 0;
    while(f)
    {
        f = 0;
        i = 0;
        while(i < size-1)
        {
            if(tab[i] > tab[i + 1])
            {
                ft_swap(&tab[i], &tab[i+1]);
                f = 1;
            }
            i++;
        }  
    }
}