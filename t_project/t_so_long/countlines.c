/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countlines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 16:12:03 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

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

int ft_countlines_file(char *fd_name)
{
    int fd = open(fd_name, O_RDONLY);
    if(fd < 0)
        return -1; 
    int line = ft_countlines(fd);
    close(fd);
    return line;
}

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    
    int i = 0;
    char *fd_name = av[1];
    int line = ft_countlines_file(fd_name);
    printf("%i",line);
    printf("\n");
    return 0;
}