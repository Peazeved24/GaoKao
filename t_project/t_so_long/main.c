/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/11 14:11:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"
#include "mlx.h"
#include "colorkey.h"

void ft_start_mapvars(t_map *map)
{
    map->grid = NULL;
    map->h = 0;
    map->w = 0;
    map->p = 0;
    map->e = 0;
    map->c = 0;
}
void ft_mlx_start(t_game *game)
{
    game->mlx = mlx_init();
     
    if(!game->mlx)
        return ;
    game->window = mlx_new_window(game->mlx, game->map->w * TILE_SIZE, game->map->h * TILE_SIZE, "so_long");
    mlx_key_hook(game->window, ft_hooks, game);
    mlx_loop(game->mlx);
}

int main(int ac, char **av)
{
    if(ac == 1)
    { 
        printf("error\n");
        return 0;
    }
    t_map map;
    t_game game;
    game.map = &map;
    ft_start_mapvars(game.map);
    if(ft_fdpars(av[1], game.map) || ft_map_parse(game.map, av[1]) || ft_grid_parse(game.map) || ft_itens_parse(game.map))
    {
        printf("Error\n");
        ft_freemap(game.map);
        return 0;
    }
    ft_mlx_start(&game);
    ft_freemap(game.map);
    return 0;
}
