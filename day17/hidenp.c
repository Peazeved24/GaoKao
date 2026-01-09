/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 13:27:01 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 13:34:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(char *str, char c)
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
		char *s1 = av[1];
		char *s2 = av[2];
		
		while(s1[i] && *s2)
		{
			if(ft_strchr(s2, s1[i]))
				i++;
			else
				break;
			s2++;
		}
		if(s1[i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return 0;
}