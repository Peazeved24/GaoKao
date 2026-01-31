/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:21:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/29 18:10:12 by peazeved         ###   ########.fr       */
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

void ft_printmap(t_map *map)
{
    int i = 0;

    while(map->grid[i])
    {
        printf("%s", map->grid[i]);
        i++;
    }    
}
void ft_freempa(t_map *map)
{
    int i = 0;
    
    while(map->grid[i])
    {
        free(map->grid[i]);
        i++;
    }
    free(map->grid);
}