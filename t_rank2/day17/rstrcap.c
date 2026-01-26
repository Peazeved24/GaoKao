/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstrcap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:10:13 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:16:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_space(char c)
{
	return (c == ' ' || c == '\t');
}

void ft_rcap(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(ft_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while(str[i])
	{
		if(ft_space(str[i + 1]) && ft_lower(str[i]) || str[i + 1] == '\0')
			str[i] = str[i] - 32;
		write(1, &str[i++], 1);
	}
}

int main(int ac, char **av)
{
	if(ac < 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 1;
	while(i < ac)
	{
		ft_rcap(av[i++]);
		write(1, "\n", 1);
		
	}
	return 0;
}

