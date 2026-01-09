/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:22:49 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 14:32:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_hcd(int a, int b)
{
	while(b != 0)
	{
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int n = atoi(av[1]);
		int n2 = atoi(av[2]);
		int r = ft_hcd(n , n2);
		printf("%i", r);
	}
	printf("\n");
	return 0;
} 