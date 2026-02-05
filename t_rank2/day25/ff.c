/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:55:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/02 16:08:30 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct  s_point
{
    int           x;
    int           y;
}               t_point;


void  ft_ff(char **tab, t_point size, t_point current, char target)
{
    if(current.y >= size.y || current.y < 0 || current.x >= size.x || current.x < 0) // condicoes de limites
        return;
    if(tab[current.y][current.x] != target)
        return;
    tab[current.y][current.x] = 'F';

    ft_ff(tab, size,(t_point){current.x + 1, current.y}, target);
    ft_ff(tab, size,(t_point){current.x - 1, current.y}, target);
    ft_ff(tab, size,(t_point){current.x, current.y+1}, target);
    ft_ff(tab, size,(t_point){current.x, current.y-1}, target);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x];
    ft_ff(tab, size, begin , target);
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