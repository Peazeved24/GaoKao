/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:31:35 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:35:56 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_atoi(char *st)
{
	int n = 0;
	int s = 1;

	while(*st == ' ' || *st == '\t')
		st++;
	if(*st =='+' || *st == '-')
	{
		if(*st == '-')
			s = -1;
		st++;
	}
	while(*st >= '0' && *st <= '9')
		n = n * 10 + (*st++ -'0'); //digit
	return n * s;
} 

int main()
{
	char *s = "--90";
	printf("%i", ft_atoi(s));
	return 0;
}