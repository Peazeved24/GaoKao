/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabmults.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:02:43 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 14:19:28 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putstr(char *str)
{
    int i = 0;

    while(str[i])
        write(1, &str[i++], 1);
}
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

int ft_atoi(char *str)
{
    unsigned int n = 0;
    unsigned int s = 1;

    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return (n * s) ;
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
            ft_putstr(" x ");
            ft_putnbr(n);
            ft_putstr(" = ");
            ft_putnbr(i * n);
            ft_putchar('\n');
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}