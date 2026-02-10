/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_tiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:01:19 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/10 19:16:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"
#include "mlx.h"
#include "colorkey.h"

void ft_draw_tiles(t_game *game ,int y, int x, int color)
{
    int r;
    int c;

    r = 0;
    c = 0;
    while(r < TILE_SIZE)
    {
        c = 0;
        while(c < TILE_SIZE)
        {
            mlx_pixel_put(game->mlx, game->window, x + c, y + r, color);
            c++;
        }
        r++;
    }
}

void ft_fill_char(t_game *game , char c, int y, int x)
{
    if(c  == '1')
        ft_draw_tiles(game, y, x, C_1);
    else if(c == '0')
        ft_draw_tiles(game, y, x, C_0);
    else if(c == 'P')
        ft_draw_tiles(game, y, x, C_P);
    else if(c == 'E')
        ft_draw_tiles(game, y, x, C_E);
    else if(c == 'C')
        ft_draw_tiles(game, y, x, C_C);
}

void ft_map_fill_tiles(t_game *game)
{
    int r; 
    int c;
    int y;
    int x;
    char chr;
    
    r = 0;
    c = 0;
    y = 0;
    x = 0;
    chr = 0;
    while(r < game->map->h)
    {
        c = 0;
        while(c < game->map->w)
        {
            chr = game->map->grid[r][c];
            y = r * TILE_SIZE;
            x = c * TILE_SIZE;
            ft_fill_char(game, chr, y, x);    
            c++;
        }
        r++;
    }
}

