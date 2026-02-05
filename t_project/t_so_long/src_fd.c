/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_fd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:12:32 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 20:14:00 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_fdpars(char *file_name,t_map *map)
{
    map->h = ft_countlines_file(file_name);
    if(map->h <= 0)
        return (1);
    return 0;
}

int ft_countlines(int fd) 
{
    int ct = 0;
    char *line = NULL;
    while((line = get_next_line(fd)))
    {
        ct++;
        free(line);
    }
    return ct;
}

int ft_countlines_file(char *file_name)
{
    int fd = open(file_name, O_RDONLY);
    if(fd < 0)  
        return -1; 
    int line = ft_countlines(fd);
    close(fd);
    return line;
}
