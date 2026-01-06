/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:53:40 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 15:56:42 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

unsigned char swap_bits(unsigned char octet)
{
    return (octet >> 4) | (octet << 4);
}

int main()
{
    unsigned char octet = 8;
    printf("%d", swap_bits(octet));
    return 0;
}