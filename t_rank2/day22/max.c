/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:50:25 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 13:55:50 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"



int		max(int* tab, unsigned int len)
{
    int max = 0;
    int i = 0;

    while(i < len)
    {
        if(max < tab[i])
            max = tab[i];
        i++;
    }
    return max;    
}

int main()
{
    int tab[] = {1, 2, 4 ,6 ,19};
    unsigned int len = 5;
    printf("%i\n", max(tab, len));
    
    return 0;
}