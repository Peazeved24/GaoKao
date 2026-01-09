/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:10:22 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 15:19:40 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char  *ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return s2;	
}
int main()
{
	char s1[] = "";
	char s2[] = "ola mundo";
	printf("%s\n",ft_strcpy(s1, s2));
	return 0;
}