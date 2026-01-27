/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapbits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:29:57 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/28 14:04:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet  >> 4) | (octet << 4));
}

int main()
{
    unsigned char octet = 0b00101010;
    printf("%i", swap_bits(octet));
    return 0;
}