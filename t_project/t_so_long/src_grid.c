/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:56:44 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/06 18:48:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_linew(char *line)
{
    int i = 0;
    if(!line)
        return (0);
    while(line[i] && line[i] != '\n')
    {
        i++;
    }
    return i;
}
int ft_map_check(t_map *map)
{
    if (!map || !map->grid || !map->grid[0])
        return (-1);
    map->w = ft_linew(map->grid[0]);
    if(map->w < 3)
        return 1;
    int j = 0;
    
    while(map->grid[j])
    {
        if(map->w != ft_linew(map->grid[j]))
            return -1;
        j++;
    }
    return 0;
}

int ft_border_check_extreme(t_map *map)
{

    int x;
    int y;

    x = 0;
    y = 0;
    while(x < map->w)
    {
        if(map->grid[0][x] != '1')
            return 1;
        x++;
    }
    x = 0;
    y = map->h-1;
    while(x < map->w)
    {
        if(map->grid[y][x] != '1')
            return 1;
        x++;
    }
    return 0;
}
int ft_boder_check(t_map *map)
{
    int x;
    int y;

    x = 0;
    y = 1;
    while(y < map->h-1) // enquanto n chegar a minha ultina linha
    {
        if(map->grid[y][x] != '1' || map->grid[y][map->w-1] != '1')
            return 1;
        y++;
    }
    return 0;
}

int ft_grid_parse(t_map *map)
{
    if(ft_map_check(map))
        return 1;
    if(ft_border_check_extreme(map))
        return 1;
    if(ft_boder_check(map))
        return 1;
    return 0;
}
