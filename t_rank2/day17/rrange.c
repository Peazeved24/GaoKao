/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:51:35 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 17:06:03 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_abs(int n)
{
	if(n < 0)
		n = -n;
	return n;
}

int *ft_rrange(int start , int end)
{
	int i = 0;
	int len = ft_abs(end - start) + 1;
	int *arr = malloc(sizeof(int *) * len);
	if(!arr)
		return NULL;
	if(start == 0 && end == 0)
	{
		arr[0] = 0;
		return arr;
	}

	if(start < end) // 1-3 == 3 .. 1
	{
		while(start <= end)
		{
			arr[i++] = end--;
		}
	}
	else
	{
		while(start >= end)
		{
			arr[i++] = end++;
		}
	}
	return arr;
}
/*
	ponto x - y 
			caso o meu x < y
					- x++
					else
					-x--;
*/
int main()
{	
	int i = 0;
	int start = 0;
	int end = 0;
	int len = ft_abs(end - start) + 1;
	int *arr = ft_rrange(start, end);
	
	while(i < len)
		printf("%i", arr[i++]);
	
	return 0;
}