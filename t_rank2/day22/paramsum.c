/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:03:23 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 13:09:57 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if(n > 10)
        ft_putchar(n / 10);
    ft_putchar(n % 10 + '0');
}

int main(int ac, char **av)
{
    (void)ac;
    ft_putnbr(ac - 1);
    return 0;
}