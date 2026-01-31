/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:26 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/29 19:14:33 by peazeved         ###   ########.fr       */
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
}   t_map;

//GNL
int ft_strlen(char *str);
void ft_shiftbuffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);
//FD PROC.
int ft_countlines(int fd);
int ft_countlines_file(char *fd_name);
int ft_fdpars(char *file_name,t_map *map);
//MAP - proc 
int ft_linew(char *fd_name); // futur0 pasing...
int ft_alocmap(t_map *map); // cria a matriz
int ft_fillmap(t_map *map, char *file_name); // prenche ela.
void ft_printmap(t_map *map); // debug
void ft_freempa(t_map *map); 
//-----------------------------
int ft_mapcheck(t_map *map); //retangulo?
int ft_bodercheck(t_map *map); // validar bordas.
#endif
