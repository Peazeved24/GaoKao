/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:28:24 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 16:45:26 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;

void ft_ff(char **tab, t_point size, t_point begin, char target)
{
    if(begin.x < 0 || begin.x >= size.x || begin.y < 0 || begin.y >= size.y)
        return ;
        
    if(tab[begin.y][begin.x] != target)
        return ;
        
    tab[begin.y][begin.x]= 'F';
    
    ft_ff(tab, size, (t_point){begin.x+1, begin.y}, target);
    ft_ff(tab, size, (t_point){begin.x-1, begin.y}, target);
    ft_ff(tab, size, (t_point){begin.x, begin.y+1}, target);
    ft_ff(tab, size, (t_point){begin.x, begin.y-1}, target);
    
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    ft_ff(tab, size, begin, target);
}
  
char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}