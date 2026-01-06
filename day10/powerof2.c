/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   powerof2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 13:56:13 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/01 14:02:29 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int	    is_power_of_2(unsigned int n)
{
    int nbr =  1;

    while(nbr <= n)
    {
        if(nbr == n)
            return 1;
        nbr = nbr * 2;
    }

    return 0;
}


int main()
{
    unsigned int n = 32;
    printf("%i", is_power_of_2(n));
    return 0;
}
