/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:37:37 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 13:41:46 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int max(int *tab , unsigned int len)
{
    int i = 0;
    int tmp = tab[i];

    while(i < len)
    {
        if(tab[i] > tmp)
            tmp = tab[i];
        i++;
    }
    return tmp;
}

int main()
{
    int tab[] = {1,4, 5,6,7};
    unsigned int size = 5;
    printf("%i", max(tab, size));
    return 0;
} 