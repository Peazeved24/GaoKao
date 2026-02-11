/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:26 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/11 15:27:07 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_H
#define S_H


#ifndef BUFFER
#define BUFFER  9999

#endif

#ifndef TILE_SIZE
#define TILE_SIZE 32
#endif

#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_point // flood_fill + posicao inicial do player.
{
    int x;
    int y;
} t_point;

typedef struct s_map
{
    char **grid; // mapa
    int h; // LINHAS
    int w; // COLUNAS
    int p;
    int e;
    int c;
    t_point player;
}   t_map;

typedef struct s_game
{
    void *mlx;
    void *window; // janela
    t_map *map; // mapa agora faz PARTE do jogo.
    int key;
}   t_game;

//GNL
int ft_strlen(char *str);
void ft_shiftbuffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);
//-----------------------------
//FD-PROC.
int ft_countlines(int fd);
int ft_countlines_file(char *fd_name);
int ft_fdpars(char *file_name,t_map *map);
int ft_strlen2(char *s);
int ft_fdname_parse(char *file_name);
//-----------------------------
//MAP-proc 
int ft_map_parse(t_map *map, char *file_name);
int ft_alocmap(t_map *map); // cria a matriz
int ft_fillmap(t_map *map, char *file_name);
void ft_freemap(t_map *map);
void ft_freemapcopy(char **c_map, int h);
//-----------------------------
//GRID_PARSE
int ft_linew(char *fd_name);
int ft_map_check(t_map *map);
int ft_border_check_extreme(t_map *map);
int ft_boder_check(t_map *map);
int ft_grid_parse(t_map *map);
//-------------
//Flood Fill + game.var pars.
void ft_floodfill(char **map, t_point size, t_point player);
int ft_v_walls_roads(char c);
int ft_v_chars(char c);
int ft_chars_pars(t_map *map);
void ft_run_itens_parse(t_map *map);
int ft_count_itens(t_map *map);
t_point ft_findplayer(t_map *map);
char **ft_mapcopy(t_map *map);
int ft_run_for_flood(char **c_map, t_map *map);
int ft_mapflood(t_map *map);
int ft_itens_parse(t_map *map);
//-----------------------------
//MLX + TILES+HOOKS
void ft_draw_tiles(t_game *game ,int y, int x, int color);
void ft_map_fill_tiles(t_game *game);
void ft_move_player(t_game *game, int key);
int ft_hooks(int key , t_game *game);
#endif
