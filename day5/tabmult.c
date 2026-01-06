/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabmult.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:10:31 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 18:16:56 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_atoi(char *str)
{
    int n = 0;
    int s = 1;

    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return n * s;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = ft_atoi(av[1]);
        int i = 1;

        while(i < 10)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(n);
            write(1, " = ", 3);
            ft_putnbr(n * i);
            write(1,"\n", 1 );
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}