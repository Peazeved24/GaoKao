/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversebits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:11:03 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/28 14:09:04 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

unsigned char	reverse_bits(unsigned char octet)
{
    int res = 0;
    int i = 0;
    
    while(i < 8) // dar as 8 voltas.
    {
        res <<= 1;// abirar espaco para por os proximso digitos;
        res |= (octet & 1);
        octet >>= 1;
        i++;
    }
    return res;
}

int main()
{
    unsigned char octet = 1;
    printf("%i", reverse_bits(octet));
    return 0;
}


// print e saber percorrer o index de uma octet
// swap e saber trocar nibbles usando shifts
// reverse e sobre como usar o \= juntamente com o &;