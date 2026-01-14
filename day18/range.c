/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:33:42 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 13:15:01 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_abs(int n)
{
	if(n < 0)
	 	n = -n;
	return n;
}

int	*ft_range(int start, int end)
{
	int i = 0;
	int len = ft_abs(end - start) + 1;
	int *ar = malloc(sizeof(int) * len);
	if(!ar)
		return 0;
	if(start == 0 && end == 0)
	{
		ar[i] = 0;
		return ar;
	}
	if(start < end)
	{
		while(start <= end)
		{
			ar[i++] = start++;
		}
	}
	else
	{
		while(start >= end)
		{
			ar[i++] = start--;
		}
	}
	return ar;
}
int main()
{
	int i = 0;
	int start = -1;
	int end = 0;
	int len = abs(end-start) + 1;
	int *ar = ft_range(start, end);

	while(i < len)
	{
		printf("%i-", ar[i++]);
	}
	return 0;
}