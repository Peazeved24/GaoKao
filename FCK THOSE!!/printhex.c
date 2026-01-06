/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:45:46 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 12:57:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int  n = 0 ;
    
   while(*str >= '0' && *str <= '9')
    n = n * 10 + (*str++ - '0');
    return n;
}

void ft_hexa(int n)
{
    char hexa[] = "0123456789abcdef";

    if(n > 15)
    {
        ft_hexa(n / 16);
    }
    ft_putchar(hexa[n % 16]);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        ft_hexa(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
    return 0;
}