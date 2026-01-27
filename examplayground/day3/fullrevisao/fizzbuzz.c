/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:31:33 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:37:03 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
    if(n > 9)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
int main()
{
    int i = 1;
    
    while(i <= 100) // enquanto n chegar a 100.
    {
        if(i % 3 == 0 && i % 5 == 0) // se for multiplo de ambos
        {
            write(1, "fizzbuzz", 8);
        }
        else if(i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            ft_putnbr(i);
        }
        write(1, "\n", 1);
        i++;
    }
    return 0;
}