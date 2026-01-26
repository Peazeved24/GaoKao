/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:07:26 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 11:10:01 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
	if(ac == 4)
	{
		int n1 = atoi(av[1]);
		int n2 = atoi(av[3]);
		char c  = av[2][0];

		if(c == '+')
			printf("%d", n1 + n2);
		//etc
	}
	printf("\n");
	return 0;
}