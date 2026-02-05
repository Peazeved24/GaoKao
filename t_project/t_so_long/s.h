/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:26 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 20:28:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_H
#define S_H


#ifndef BUFFER
#define BUFFER  9999

#endif
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_map
{
    char **grid; // mapa
    int h; // LINHAS
    int w; // COLUNAS
    int p;
    int e;
    int c;
    int x;
}   t_map;

typedef struct s_point // flood_fill + posicao inicial do player.
{
    int x;
    int y;
} t_point;

//GNL
int ft_strlen(char *str);
void ft_shiftbuffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);
//FD-PROC.
int ft_countlines(int fd);
int ft_countlines_file(char *fd_name);
int ft_fdpars(char *file_name,t_map *map);
//MAP-proc 
int ft_alocmap(t_map *map); // cria a matriz
int ft_fillmap(t_map *map, char *file_name); // prenche ela.
void ft_printmap(t_map *map); // debug
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

#endif
