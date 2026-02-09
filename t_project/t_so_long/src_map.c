/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:21:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/06 19:44:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_alocmap(t_map *map)
{
    map->grid = malloc(sizeof(char*) * (map->h + 1));
    if(!map->grid)
        return (1);
    map->grid[map->h] = NULL;
    return 0;
}

int ft_fillmap(t_map *map, char *file_name)
{
    int i = 0;
    int fd =  open(file_name, O_RDONLY);
    if(fd < 0)
        return (1);
    
    while(i < map->h)
    {
        map->grid[i] = get_next_line(fd);
        if(!map->grid[i])
        {
            close(fd);
            return 1;
        }
        i++;
    }
    close(fd);
    return 0;
}
int ft_map_parse(t_map *map, char *file_name)
{
    if(ft_alocmap(map))
        return 1;
    if(ft_fillmap(map, file_name))
        return 1;
    return 0;
}
void ft_freemap(t_map *map)
{
    int i = 0;
    if(!map || !map->grid)
        return ;
    while(map->grid[i])
    {
        free(map->grid[i]);
        i++;
    }
    free(map->grid);
    map->grid= NULL;
}
void ft_freemapcopy(char **c_map, int h)
{
    int i = 0;

    if(!c_map)
        return ;
    while(i < h)
    {
        free(c_map[i]);
        i++;
    }
    free(c_map);
    c_map = NULL;
}