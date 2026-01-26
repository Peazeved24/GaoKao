/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:25:27 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 12:32:43 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_shcstr(char *str, char c)
{
	while(*str)
	{
		if(*str == c)
			return (char*)str;
		str++;
	}
	return 0;
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int i = 0;
		int x = 0;
		char *s1 = av[1];
		char *s2 = av[2];
		char str[256] = "";
		while(s1[i])
		{
			if(ft_shcstr(s2, s1[i]) &&  !ft_shcstr(str, s1[i]))
			{
				str[x++] = s1[i];
				str[x] = '\0';
			}
			i++;
		}
		write(1, str, x);
	}
	write(1, "\n", 1);
	return 0;
}