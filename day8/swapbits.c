/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapbits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:52:48 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 14:01:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

unsigned char	swap_bits(unsigned char octet)
{
    return (octet >> 4) | (octet << 4);
}

int main()
{
    unsigned char octet = 162;
    printf("%u", swap_bits(octet));
    return 0;
}