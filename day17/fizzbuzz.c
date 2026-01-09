/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:53:28 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:56:26 by peazeved         ###   ########.fr       */
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
	int i = 1;

	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}