/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_item_parse2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:27:27 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/06 19:23:41 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

t_point ft_findplayer(t_map *map)
{
    t_point p;
    int y;
    int x;

    y = 0;
    x = 0;
    p.x = -1;
    p.y = -1;
    while(y < map->h)
    {
        x = 0;
        while(x < map->w)
        {
            if(map->grid[y][x] == 'P') // se encontrares;
            {
                p.x = x;
                p.y = y;
                return p;
            }
            x++;
        }
        y++;
    }
   return p;
}

char **ft_mapcopy(t_map *map)
{
    char **c_map;// o malloc para cada linha horizontal
    int i;
    int j;

    i = 0;
    j = 0;
    c_map = malloc(sizeof(char *) * (map->h + 1));
    if(!c_map)
        return NULL;
    while(i < map->h) // linha por linha
    {
        c_map[i] = malloc(map->w + 1);
        if(!c_map[i])
            return NULL;
        j = 0;
        while(j < map->w)
        {
            c_map[i][j] = map->grid[i][j];
            j++;
        }
        c_map[i][map->w] = '\0';
        i++;
    }
    c_map[i] = NULL;
    return c_map;
}

int ft_run_for_flood(char **c_map, t_map *map)
{
    int i = 0;
    int x = 0;
    while(i < map->h)
    {
        x = 0;
        while(x < map->w)
        {
            if(c_map[i][x] == 'C' || c_map[i][x] == 'E')
            {
                printf("F_error\n");
                return 1;   
            }
            x++;
        }
        i++;
    }
    return 0;
}


int ft_mapflood(t_map *map)
{
    t_point player;
    t_point size;
    char **c_map;
    
    size.x = map->w;
    size.y = map->h;
    player = ft_findplayer(map);
    if(player.x < 0 || player.y < 0)
        return 1;
    c_map= ft_mapcopy(map); 
    if(!c_map)
        return 1; 
    ft_floodfill(c_map, size, player);
    if(ft_run_for_flood(c_map, map))
    {
        ft_freemapcopy(c_map, map->h);
        return 1;
    }
    ft_freemapcopy(c_map, map->h);
    return 0;
}


int ft_itens_parse(t_map *map) // modificar
{
    if(ft_chars_pars(map))
        return 1;
    if(ft_count_itens(map))
        return 1;
    if(ft_mapflood(map))
        return 1;
    return 0;
} 