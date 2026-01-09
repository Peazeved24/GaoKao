/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epurstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:17:06 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 17:29:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
	return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		int n = 0; // out
		char *str = av[1];

		while(ft_space(str[i]))
			i++;
		int start = i;
		while(str[i])
			i++;
		i--;
		while(ft_space(str[i]))
			i--;
		int end = i;

		while(start <= end)
		{
			if(!ft_space(str[start]))
			{
				if(!n) // in
					n = 1;
				write(1, &str[start], 1);
			}
			else if(n)
			{
				write(1, " ", 1);
				n = 0;
			}
			start++;
		}
	}
	//"this        time it      will     be    more complex  ."
	write(1, "\n", 1);
	return 0;
}