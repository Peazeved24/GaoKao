/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   am.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:17:29 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 14:22:29 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_am(char c)
{
	if(c >= 'a' && c <= 'z')
		return 'z' - (c - 'a');
	//etc
	return c;
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i = 0;
		char *s = av[1];

		while(s[i])
		{
			char result = ft_am(s[i]);
			write(1, &result, 1);
			i++;
		}
	}
	return 0;
}