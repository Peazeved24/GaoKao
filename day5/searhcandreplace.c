/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searhcandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:57:26 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 18:04:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return i;
}
int main(int ac, char **av)
{
    if(ac == 4)
    {
        if(!av[1] || av[2][1] || av[3][1])
            return 1;
        
        int i = 0;
        char *s1 = av[1]; // 
        char c1 = av[2][0];
        char c2 = av[3][0];
        
        while(s1[i])
        {
            if(s1[i] == c1) // se eu encontrar um char igual ao meu c1.
                s1[i] = c2; // muda os meus char de s1[i] =  que sao iguais ao meus c1. para os c2.
            write(1, &s1[i++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}

//"Papache est un sabre" "a" "o"