/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ff.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:12:01 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/02 17:52:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

void ft_ff(char **map, t_point size, t_point player)
{
    if(player.y >= size.y || size.y < 0 ||player.x >= size.x || player.x < 0)
        return;
    if(map[player.y][player.x] == '1' || map[player.y][player.x] == 'F')
        return ;
    map[player.y][player.x] = 'F';

    ft_ff(map, size, (t_point){player.x +1, player.y});
    ft_ff(map, size, (t_point){player.x-1, player.y});
    ft_ff(map, size, (t_point){player.x, player.y +1});
    ft_ff(map, size, (t_point){player.x, player.y -1});
 }
void ft_floodfill(char **map, t_point size, t_point player)
{
    ft_ff(map,size, player);
}