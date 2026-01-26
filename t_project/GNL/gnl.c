/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:09:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 19:59:58 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

char	*get_next_line(int fd)
{
    static char buffer[BUFFER+1];
    char *line;
    int bytes_read;

    line = NULL;
    bytes_read = 0;
    
    if(fd < 0 || BUFFER < 1)
    {
        if(BUFFER > 0)
        {
            ft_shiftbuffer(buffer);
            return NULL;
        }
    }
    while(buffer[0] || read(fd, buffer, BUFFER) > 0)
    {
        line = ft_strjoin(line, buffer);
        if(!line)
            return NULL;
        ft_shiftbuffer(buffer);
        if(line[(ft_linelen(line) - 1)] == '\n')
            break;
    }
    return line;
}