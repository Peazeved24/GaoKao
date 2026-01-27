/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispowerof2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:23:52 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/28 14:18:56 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int	    is_power_of_2(unsigned int n)
{
    return (n != 0 && (n  & (n-1)) == 0);
}

int main()
{
    unsigned int n = 16;
    printf("%i", is_power_of_2(n));
    
}

/*estudar BIT  OPERATOR!!!!!!!!!!!:

    -printfbits
        - i = 128
        - e ir fazendo uma and op a medida que vai decrementando o i (i>>= 1);
        
    -is power of 2-(bit wise version)
    
        - a foma mais elegante e fazendo com operadores de bitwise.
            - ou seja, a solucao e ver se no fim de um and op sobra somente 0!
                - se sobrar um 1 , logo n e
                 -“Quando subtraio 1 de uma potência de 2, o único bit 1 vira 0,
e todos os bits à direita viram 1 — portanto, o AND zera tudo.”

    - swap bits
            - em uma linha se faz esse kkkk
                - sobre como usar o >> 4 e << 4 usando o | para juntar.
                return ((octet  >> 4) | (octet << 4));
                
    - reversebits
    
        - e mais sobre como manipular bits atraves de shifts (>>= 1 /  <<= 1);
        - criar uma var do tipo int onde enquanto n chegar ao 8 bits (128);
            - move o bit da minha var para a esquerda (<<= 1);
                    - passa os meus bits da octet & 1 para res usando uma or op.(|=)
                    - passa os da octet para a dir >>=1;*/