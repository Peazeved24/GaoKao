/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:30:47 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/25 15:37:44 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_cmp(int n1, int n2)
{
    return (n1 - n2);
}

int max(int *tab , unsigned int len)
{
    int i =  0;
    int tmp = tab[i];

    while(i < len)
    {
        if(ft_cmp(tab[i], tmp) > 0)
            tmp = tab[i];
        i++;
    }
    return tmp;
}

int main()
{
    int arr[] = {10, 43, 90, 292, 2};
    unsigned int size = 5;
    printf("%i", max(arr, size));
    return 0;
}