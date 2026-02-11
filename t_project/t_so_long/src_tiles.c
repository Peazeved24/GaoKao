/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_tiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:01:19 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/11 21:05:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"
#include "mlx.h"
#include "imgandkey.h"

void ft_load_img(t_game *game)
{
    game->img.wall = mlx_xpm_file_to_image(game->mlx, IMG_WALL, &game->img.h, &game->img.w);
    game->img.player = mlx_xpm_file_to_image(game->mlx, IMG_PLAYER, &game->img.h, &game->img.w);
    game->img.exit = mlx_xpm_file_to_image(game->mlx, IMG_EXIT, &game->img.h, &game->img.w);
    game->img.collect = mlx_xpm_file_to_image(game->mlx, IMG_COLLECT, &game->img.h, &game->img.w);
    game->img.floor = mlx_xpm_file_to_image(game->mlx, IMG_FLOOR, &game->img.h, &game->img.w);
}
//void ft_draw_tiles(t_game *game ,int y, int x, int color)


//void ft_fill_char(t_game *game , char c, int y, int x);

void ft_render_map(t_game *game)
{
    int r; 
    int c;
    int y;
    int x;
    char *img;
    
    r = 0;
    c = 0;
    y = 0;
    x = 0;
    img = 0;
    while(r < game->map->h)
    {
        c = 0;
        while(c < game->map->w)
        {
            img = game->img.floor;
            if(game->map->grid[r][c] == '1')
                img = game->img.wall;
            else if(game->map->grid[r][c] == 'P')
                img = game->img.player;
            else if(game->map->grid[r][c] == 'E')
                img = game->img.exit;
            else if(game->map->grid[r][c] == 'C')
                img = game->img.collect;
            mlx_put_image_to_window(game->mlx,game->window,img, x * TILE_SIZE, y * TILE_SIZE);
        }
        r++;
    }
}

