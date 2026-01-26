/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:53:02 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 10:56:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int rotone(char c)
{
	if(c >= 'a' && c <= 'z')
		return 'a' + (( c - 'a') + 1) % 26;
	//etc
	return c;
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		char *str = av[1];
		while(str[i])
		{
			int result =rotone(str[i]);
			write(1, &result, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}