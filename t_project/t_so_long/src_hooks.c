/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:23:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/11 15:43:24 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "s.h"
#include "mlx.h"
#include "colorkey.h"

int ft_hooks(int key , t_game *game)
{
    printf("KEY: %d\n", key);
    ft_move_player(game , key);

    mlx_clear_window(game->mlx,game->window);
    ft_map_fill_tiles(game);
    return 0;
}

void ft_move_player(t_game *game, int key)
{
    int px = game->map->player.x;
    int py = game->map->player.y;
    int nx = px;
    int ny = py;
    char dest;

    if (key == K_W)
        ny--;
    else if (key == K_S)
        ny++;
    else if (key == K_A)
        nx--;
    else if (key == K_D)
        nx++;
    else if (key == k_ESQ)
        exit(0);
    else
        return;
    if (ny < 0 || ny >= game->map->h || nx < 0 || nx >= game->map->w)
        return;
    dest = game->map->grid[ny][nx];
    if (dest == '1')
        return;
    if (dest == 'C') 
        game->map->c--;
    // if E 
    game->map->grid[py][px] = '0';
    game->map->grid[ny][nx] = 'P';
    game->map->player.x = nx;
    game->map->player.y = ny;
}

/*
    movimentacao:
        -> entender as dimensoes na grid;
            -> cima (w) = y-1
            -> baixo (s) = y+1 etc....
        -> limites !
            -> pode ate tentar sair ,mas tem de haver limites.
                -> FF.
        -> target ! -> coletar objetos , quando pode sair etc.

        -> atualizacao do mapa.
            -> atualizar a posicao antiga por 0.
            -> atualizar para as novas pos -> player.y = p_y (calculo feito pelo o move)
            -> entneder que apos o movimento == P.
            |P|0| == |0|P| 
*/