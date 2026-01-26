/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 15:20:04 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 15:37:48 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(const char *s, char c)
{
	while(*s)
	{
		if(*s == c)
			return (char*)s;
		s++;
	}
	return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while(s[i])
	{
		if(ft_strchr(accept, s[i]))
			i++;
		else
			break;
	}
	return i;
}
int main()
{
	char *s1 = "abc434";
	char *s2 = "434cba";
	
	printf("%lu\n", ft_strspn(s1, s2));
	printf("%lu\n", strspn(s1, s2));
	return 0;
}