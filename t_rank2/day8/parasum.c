/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:48:27 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 16:53:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{
    if(ac < 2)
    {
        write(1, "0\n", 2);
        return 0;
    }
    int c = ac - 1;
    ft_putnbr(c);
    ft_putchar('\n');
    return 0;
}