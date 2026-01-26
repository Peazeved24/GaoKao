/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:56:04 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/07 20:58:34 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	print_bits(unsigned char octet)
{
    int i = 128;
    while(i > 0)
    {
        if(octet & i)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i >>= 1;
    }
}

int main()
{
    unsigned char octet = 128;
    print_bits(octet);
    return 0;
}