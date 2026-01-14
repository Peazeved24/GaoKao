/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:48:40 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 12:08:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int ft_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void ft_strcap(char *str)
{
	int i = 0;
	if(!str)
		return;
	while(str[i])
	{
		if(ft_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while(str[i]) // (se eu o meu proximo for um espaco , se o meu atual e lower)
	{
		if((ft_lower(str[i])) && (ft_space(str[i-1]) || ft_lower(str[0])))
			str[i] = str[i] - 32;
		write(1, &str[i++], 1);
	}
}
int main(int ac, char **av)
{
	if(ac == 1)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 1;
	while(i < ac)
	{
		ft_strcap(av[i++]);
		write(1, "\n", 1);	
	}
	return 0;
}

// procedencias !