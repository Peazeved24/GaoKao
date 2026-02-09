/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:01:19 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/09 15:51:06 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"
#include "mlx.h"
#include "colors.h"


void ft_tiles_draw(int col, int row, int color)
{
    t_map map;
    
    int x; // h
    int y; // w
    int r; // ->h
    int c; // c ->w

    x = 0;
    y = 0;
    r = 0;
    c = 0;
    while(y < map->w)
}