/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snaketocamel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:46:04 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/24 15:25:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        
        while(str[i])
        {
            int c = str[i];
            if(c == '_' && str[i + 1])
            {
                i++;
                c = str[i];
                if(c >= 'a' && c <= 'z')
                    c-= 32;
            }
            write(1, &c, 1);
            i++;    
        }
        
    }
    write(1, "\n", 1); 
}

/*

    mal usso de do c = str[i];

    REGRA DE OURO":
        - entender que c = str[i] -- n e alias.
        -  ao mudar o index (i++), relembrar c = str[i].
        se n ,c  vai guardar a posicao antiga.

*/