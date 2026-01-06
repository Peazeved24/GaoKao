/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:01:51 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 15:41:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
/*
2️⃣ inter

Assignment name: inter

Recebe duas strings.

Imprime os caracteres que aparecem nas duas strings,

na ordem da primeira string

sem duplicados

Exemplo

./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" → padinto
*/

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        int ascii[256] = {0};

        while(s2[j])
        {
            if(ascii[(unsigned char)s2[j]] == 0)
            {
                ascii[s2[j]] = 1;
            }
            j++;
        }
        while(s1[i])
        {
            if(ascii[(unsigned char)s1[i]] == 1)
            {
                ft_putchar(s1[i]);
                ascii[s1[i]] = 2;
            }
            i++;
        }   
    }
    write(1, "\n", 1);
    return 0;
} 