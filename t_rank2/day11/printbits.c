/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:40:31 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 15:43:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_pb(unsigned char octet)
{
    int i = 128;

    while(i > 0)
    {
        if(octet & i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i>>= 1;
    } 
}

int main()
{
    unsigned char octet =42;
    ft_pb(octet);
    return 0;
}