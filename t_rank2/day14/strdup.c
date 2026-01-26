/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 20:39:36 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 20:43:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

char    *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    int i = 0;
    char *s = malloc(len _ 1);
    if(!s)
        return NULL;
    while(src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return s;
}
