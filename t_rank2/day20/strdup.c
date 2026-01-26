/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:52:09 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/20 12:54:42 by peazeved         ###   ########.fr       */
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
    int i = 0;
    int len = ft_strlen(src);
    char *str = malloc(len + 1);
    if(!str)
        return NULL;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
}

int main()
{
    char *str = "ola";
    char *sb = ft_strdup(str);

    printf("%s", sb);
    return 0;
}