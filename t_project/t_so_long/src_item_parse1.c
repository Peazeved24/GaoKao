/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_item_parse2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:15:08 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 18:15:24 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_v_walls_roads(char c)
{
    return (c == '1' || c == '0');
}
int ft_v_chars(char c)
{
    return (c == 'P'|| c == 'C' || c == 'E');
}

int ft_chars_pars(t_map *map)
{
    int i;
    int x;

    i = 0;
    x = 0;
    while(i < map->h)
    {
        x = 0;
        while(x < map->w)
        {
            if(!ft_v_chars(map->grid[i][x]) && !ft_v_walls_roads(map->grid[i][x]))
            {
                printf("P/E/C/1/0_error");
                return 1;
            }
            x++;
        }
        i++;
    }
    return 0;
}
void ft_run_itens_parse(t_map *map)
{
    int i;
    int x;
    
    i = 0;
    x = 0;
    map->e = 0;
    map->c = 0;
    map->p = 0;
    while(i < map->h)
    {
        x = 0;
        while(x < map->w)
        {
            if(map->grid[i][x] == 'P')
                map->p++;
            else if(map->grid[i][x] == 'E')
                map->e++;
            else if(map->grid[i][x] == 'C')
                map->c++;
            x++;
        }
        i++;
    }
}
int ft_count_itens(t_map *map)
{
    ft_run_itens_parse(map);
    if(map->p != 1 || map->e != 1 || map->c < 1)
        return 1;
    return 0;
}