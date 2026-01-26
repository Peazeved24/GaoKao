/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:32:35 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 19:53:50 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_H
#define S_H

#ifndef BUFFER
#define BUFFER 9999
#endif

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


int ft_linelen(char *str);
char	*ft_strjoin(char *s1, char *s2);
int ft_findnextline(char *buffer);
void ft_shiftbuffer(char *buffer);
char	*get_next_line(int fd);

#endif
