/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:35:03 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 15:40:50 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

int main()
{    
    int i = 1;

    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
        else
            ft_putnbr(i);
        ft_putchar('\n');
        i++;
    }
    return 0;
}