/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revwsr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:05:13 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 15:21:08 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];

        while(s[i])
            i++;
        i--;
        while(i > 0)
        {
            while (i >= 0 && ft_space(s[i]))
                i--;
            int end = i; //  o meu fim
            while(i >= 0 && !ft_space(s[i]))
                i--;
            int start = i + 1; // o meu inicio da palavra.
            if(end >= start)
                write(1, &s[start], end-start +1);
            if(i > 0)
                write(1, " ", 1);
            i--;
        }
        write(1, "\n", 1);
        return 0;
    }
}

/*

achar o tamanho da string
e comecar dai!

enquanto o meu fim n chegar ao inicio (esq - dir)

trim na minha ultima palavra.

imprimir a palavra


e por somente 1 espaco entre elas.

"You hate people! But I love gatherings. Isn't it ironic?" 
ironic? it Isn't gatherings. love I But people! hate You$
*/