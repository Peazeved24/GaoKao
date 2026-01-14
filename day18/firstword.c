/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:37:02 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 11:40:29 by peazeved         ###   ########.fr       */
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
		char *str = av[1];

		while(str[i] && ft_space(str[i]))
			i++;
		int start = i;
		while(str[i] && !ft_space(str[i]))
			i++;
		int end = i;

		while(start < end)
			write(1, &str[start++], 1);
	}
	write(1, "\n", 1);
	return 0;
}