/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortintab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 12:39:38 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:52:56 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_swap(int *a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int f =1;

	if(size < 2)
		return;
	while(f)
	{
		f = 0;
		i = 0;
		while(i < size-1)
		{
			if(tab[i] > tab[i+1])
			{
				ft_swap(&tab[i], &tab[i+1]);
				f = 1;
			}
			i++;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = {5,1, 7, 3, 5, 9};
	int size = 6;
	int f = 1;
	sort_int_tab(arr, size);
	while(i < size)
	{
		if(!f)
			printf("-");
		printf("%i",arr[i++]);
		f = 0;
	}
	printf("\n");
	return 0;
}