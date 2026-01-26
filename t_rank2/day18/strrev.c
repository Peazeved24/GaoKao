/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:41:25 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 11:47:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	
	while(str[i])
		i++;
	i--;
	while(j <= i)
	{
		int temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return str;	
}
// ola
int main()
{
	char str[] = "ola";
	printf("%s", ft_strrev(str));
}