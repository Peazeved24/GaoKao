/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:32:40 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 19:50:46 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"


int main()
{
    int fd = open("s.h",O_RDONLY); // abrir o ficheiro.
    char *line = NULL; // a minha linha.

    if(fd < 0)
        return (-1);

    while((line = get_next_line(fd)))
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}