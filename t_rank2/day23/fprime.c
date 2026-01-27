/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:57:51 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:25:23 by peazeved         ###   ########.fr       */
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
    
    if(ac == 2)
    {
        int n = atoi(av[1]);
        int i = 2;
        int f = 1;
        
        while(n > 1)
        {
            if(n % i == 0)
            {
                if(!f)
                    write(1, " ", 1);
                ft_putnbr(i);
                n /= i;
                f = 0;
            }
            else
                i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}