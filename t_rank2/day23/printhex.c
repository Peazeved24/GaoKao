/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:56:27 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:59:37 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
 
void ft_hexa(int n)
{
    char hex[16] = "0123456789abcdef";
    
    if(n >= 16)
    {
        ft_hexa(n/16);
    }
    ft_putchar(hex[n % 16]);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = atoi(av[1]);
        ft_hexa(n);
    }
    write(1, "\n", 1);
    return 0;
}