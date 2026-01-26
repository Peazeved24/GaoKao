/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 15:28:28 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/20 19:04:25 by peazeved         ###   ########.fr       */
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

void ft_wdmatch(char *s1, char *s2)
{
    int i = 0;
    int len = ft_strlen(s1);

    while(*s2 && i < len)
    {
        if(*s2 == s1[i])
            i++;
        s2++;
    }
    if(i == len)
        write(1, s1, len);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];
        ft_wdmatch(s1, s2);
    }
    write(1, "\n" ,1);
    return 0;
}

/*
    - a ideia e veriricar se os char da primeira str estao presentes na s2
    
        - processar a primeira string visto que e a mais importante;
        - como a ordem importa --- resetar o fluxo?? garantir indexacao correta.
        - garantir que um char  e igual de acordo com a hora.
*/