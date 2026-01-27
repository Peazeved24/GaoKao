/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:25:56 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 19:02:00 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

char *get_next_line(int fd)
{
    static char buffer[BUFFER+1];
    char *line;

    line = NULL;

    if(fd < 0 || BUFFER < 1)
        return NULL;
    
    while(buffer[0] || read(fd, buffer ,BUFFER) > 0)
    {
        line = ft_strjoin(line, buffer);
        if(!line)
            return NULL;
        ft_shiftbuffer(buffer);
        if(line[ft_strlen(line)-1] == '\n')
            break;
    }
    return line;
}
