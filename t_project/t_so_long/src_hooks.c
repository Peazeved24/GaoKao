/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:34:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/10 21:29:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"
#include "mlx.h"
#include "colorkey.h"


void ft_player_move(t_map *map, int key)
{
    int r; // h
    int c; // w
    
    r = 0;
    c = 0;
    map->player = ft_findplayer(map);
    if(map->player.x == -1)
        return 1;
    
        
}
