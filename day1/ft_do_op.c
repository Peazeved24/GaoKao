/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:32:04 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/08 16:51:30 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_atoi(char *str)
{
    int n = 0;
    int s = 1;

    while(*str == ' ' || *str  == '\t')
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            s = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return(n * s);
}

int main(int ac, char **av)
{
    
    if(ac < 4)
    {
        write(1, "\n", 1);
        return 0;
    }
        int n1 = ft_atoi(av[1]);
        int n2 = ft_atoi(av[3]);
        char s = av[2][0];

        if(s == '-')
            printf("%i", n1 - n2);
        else if(s == '+')
            printf("%i", n1 + n2);
        else if(s == '*')
            printf("%i", n1 * n2);
        else if(s == '/')
        {
            if(n2 == 0)
                return 0;
            printf("%i", n1 / n2);   
        }
        else if(s == '%')
            printf("%i", n1 % n2);
    write(1, "\n", 1);
    return 0;
}

/*
         3 vars !
                1 (av[1]) - e um numero assim como o meu av[3]
                av[2] = char ! somente 1 char (av[2][0])
            a ideia:
                    - fazermos aritmeticas com oss valores + o char.
*/