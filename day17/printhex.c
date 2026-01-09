/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:36:08 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:39:10 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_atoi(char *st)
{
	int n = 0;
	int s = 1;

	while(*st == ' ' || *st == '\t')
		st++;
	if(*st =='+' || *st == '-')
	{
		if(*st == '-')
			s = -1;
		st++;
	}
	while(*st >= '0' && *st <= '9')
		n = n * 10 + (*st++ -'0'); //digit
	return n * s;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_hex(int n)
{
	char ar[] = "0123456789abcdef";

	if(n >= 16)
		ft_hex(n / 16);
	ft_putchar(ar[n % 16]);
}
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = ft_atoi(av[1]);
		ft_hex(n);
	}
	write(1, "\n", 1);
	return 0;
}