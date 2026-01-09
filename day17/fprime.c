/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:35:57 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 13:37:59 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = atoi(av[1]);
		int i = 2;
		int f = 1;
		while(n >= i)
		{
			while(n % i == 0)
			{
				if(!f)
					printf("*");
				printf("%i", i);
				n /= i;
				f = 0;
			}
			i++;
		}
	}
	return 0;
}