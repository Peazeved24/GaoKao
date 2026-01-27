/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:26 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 18:58:30 by peazeved         ###   ########.fr       */
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


int ft_strlen(char *str);
void ft_shiftbuffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char *get_next_line(int fd);
#endif
