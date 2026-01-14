/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprimesum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:58:40 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 11:18:53 by peazeved         ###   ########.fr       */
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

int ft_atoi(char *str)
{
	int n = 0;;

	while(*str == ' ' || *str == '\t')
			str++;
	while(*str >= '0' && *str <= '9')
		n = n * 10 + (*str++ - '0');
	return n;
}

int ft_prime(int n)
{
	if(n <= 1)
		return 0;
	
	int i = 2;

	while(i * i <= n)// tentar encontrar a probabilidade 
	{
		if(n % i == 0)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

int main(int ac, char **av)
{
	if(ac == 1)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return 0;
	}
	
	int r = 0; // vamos sumando esse numero primo aqui. == se for +/
	int n = ft_atoi(av[1]);
	
	if(ac == 2)
	{
		while(n > 1)
		{
			if(ft_prime(n))
				r = r + n;
			n--;
		}
		ft_putnbr(r);	
	}
	write(1, "\n", 1);
	return 0;
}