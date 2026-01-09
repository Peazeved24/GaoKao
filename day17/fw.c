/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:04:04 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 11:06:54 by peazeved         ###   ########.fr       */
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

		while(ft_space(str[i]))
			i++;
		int start = i;
		while(!ft_space(str[i]))
			i++;
		int end = i;
		while(start < end)
		{
			write(1, &str[start++], 1);
		}
	}
	write(1, "\n", 1);
	return 0;
}