/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapbits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:56:29 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 10:58:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main()
{
	unsigned char octet = 8;
	printf("%u", swap_bits(octet));
	
	return 0;
}