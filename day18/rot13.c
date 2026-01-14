/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:20:53 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 12:25:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_rot13(char c)
{
	if(c >= 'a' && c <= 'z')
		return 'a' + ((c - 'a') + 13) % 26;
	//etc
	return 0;
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		char *str = av[1];
		while(str[i])
		{
			int result = ft_rot13(str[i]);
			write(1, &result, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}