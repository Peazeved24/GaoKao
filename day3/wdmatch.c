/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 14:41:04 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 15:27:20 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

/*
    Assignment name: wdmatch
Expected files: wdmatch.c

Escreve um programa que receba duas strings como argumentos.

👉 Se todos os caracteres da primeira string aparecem na segunda string, na mesma ordem, imprime a primeira string.
Caso contrário, imprime apenas uma newline.

Não podes reordenar caracteres.

Cada carácter da segunda string só pode ser usado uma vez.

Caso número errado de argumentos → imprime apenas \n.

Exemplo

./wdmatch "abc" "aaabbbccc" → abc
./wdmatch "abc" "acb" → (nada)
*/


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])   
        i++;
    return i;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];

        int i = 0;
        int len = ft_strlen(s1);
        
        while(*s2)
        {
            if(*s2 == s1[i])
                i++;
            s2++;
        }
        if(i == len)
            write(1, s1, len);
    }
    write(1, "\n", 1);
    return 0;
}


/*
    - pegar 2 strings
        - verificar se a string1 esta presente dentro da string2 PELA MSM ORMDE.
*/