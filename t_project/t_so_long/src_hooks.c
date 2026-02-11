/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:23:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/11 21:05:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "s.h"
#include "mlx.h"
#include "imgandkey.h"

int ft_hooks(int key ,t_game *game)
{
    printf("KEY: %d\n", key);
    
    ft_move_player(game->map, key);
    mlx_clear_window(game->mlx,game->window);
    ft_render_map(game);
    return 0;
}

void ft_move_player(t_map *map, int key)
{
    int new_x = map->player.x;
    int new_y = map->player.y;

    if (key == K_W)
        new_y--;
    else if (key == K_S)
        new_y++;
    else if (key == K_A)
        new_x--;
    else if (key == K_D)
        new_x++;
    else if (key == k_ESQ)
        exit(0);

    if(new_y < 0 || new_y >= map->h || new_x < 0 || new_x >= map->w)
        return ;
    char c = map->grid[new_y][new_x];
    if (c == '1')
        return;
    if (c == 'C')
        map->c--;
    map->grid[map->player.y][map->player.x] = '0';
    map->player.x = new_x;
    map->player.y = new_y;
    map->grid[new_y][new_x] = 'P';     
}    
