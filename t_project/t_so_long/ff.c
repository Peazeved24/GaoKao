/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:12:01 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/31 19:30:03 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

typedef struct s_point
{
    int x;
    int y;
} t_point;

void ft_ff(char **grid, t_point size, t_point pos, char target)
{
    if(pos.y >= size.y || size.y < 0 ||pos.x >= size.x || pos.x < 0)
        return;
    if(grid[pos.y][pos.x] != target)
        return ;
    grid[pos.y][pos.x] = 'F';

    ft_ff(grid, size, (t_point){pos.x +1, pos.y}, target);
    ft_ff(grid, size, (t_point){pos.x-1, pos.y}, target);
    ft_ff(grid, size, (t_point){pos.x, pos.y +1}, target);
    ft_ff(grid, size, (t_point){pos.x, pos.y -1}, target);
 }
void ft_floodfill(char **grid, t_point size, t_point pos)
{
    char target = grid[pos.y][pos.x];
    ft_ff(grid,size, pos, target);
}