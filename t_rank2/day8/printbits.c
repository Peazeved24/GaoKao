/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:37:11 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 16:47:32 by peazeved         ###   ########.fr       */
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
    unsigned char octet = 1;
    print_bits(octet);
    return 0;
}
