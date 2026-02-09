/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src_fd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:12:32 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/06 19:12:31 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int ft_strlen2(char *s)
{
    int i;
    i = 0;

    while(s[i])
        i++;
    return i;
}

int ft_fdname_parse(char *file_name)
{
    int len;

    len = ft_strlen2(file_name);
    if(len <= 4)
    {
        printf("Error_fd\n");
        return 1;   
    }
    if(file_name[len-4] != '.' || file_name[len-3] != 'b' || file_name[len-2] != 'e' || file_name[len-1] != 'r')
        return 1;
    return 0;
}

int ft_fdpars(char *file_name,t_map *map)
{
    if(ft_fdname_parse(file_name))
        return 1;
    map->h = ft_countlines_file(file_name);
    if(map->h < 3)
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
