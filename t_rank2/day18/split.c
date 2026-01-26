/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:15:17 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 13:28:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int ft_cw(char *str) // conta
{
	int i = 0;
	int c = 0;
	while(str[i])
	{
		while(ft_space(str[i]))
			i++;
		if(str[i])
		{
			c++;
			while(!ft_space(str[i]))
				i++;
		}
	}
	return c;
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	char **arr = malloc(sizeof(char*) * (ft_cw(str) + 1));
	if(!arr)
		return NULL;
	while(str[i])
	{
		while(str[i] && ft_space(str[i]))
			i++;
		if(str[i])
		{
			int start = i;
			while(str[i] && !ft_space(str[i]))
				i++;
			int len = i - start;
			arr[j] = malloc(len + 1);
			if(!arr[j]) // free?
				return NULL;
			
			int k = 0;
			while(k < len)
			{
				arr[j][k] = str[start + k];
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return arr;
}
int main()
{
	int i = 0;
	char *str = "ola mundo tudo";
	char **arr = ft_split(str);
	int f = 1;

	while(arr[i])
	{
		if(!f)
			printf("->");
		printf("%s", arr[i++]);
		f = 0;
	}
	return 0;
}