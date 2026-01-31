/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_map2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:56:44 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/29 19:37:10 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_mapcheck(t_map *map) // as minhas vars. e o meu 
{
    map->w = ft_linew(map->grid[0]);
    int j = 0;
    
    if (!map || !map->grid || !map->grid[0])
        return (-1);
    while(map->grid[j])
    {
        if(map->w != ft_linew(map->grid[j]))
            return -1;
        j++;
    }
    return 0;
}// falta guardar largurra em map->w ...

int ft_bodercheck(t_map *map)
{
    int x = 0;
    while(x < map->w)
    {
        if(map->grid[0][x] != '1')
            return 1;
        x++;
    }
    int x = 0;
    while(map < map->w)
    {
        
    }
    x = 0;
    int y = map->h-1;
    while(x < map->w)
    {
        if(map->grid[y][x] != '1')
            return 1;
        x++;
    }
    return 0;
}

/*
1111111
1000011
10P0011
1111111

*/

