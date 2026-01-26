/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:09:17 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 19:54:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"


int ft_linelen(char *str) // len da linha mais o \n
{
    int i =  0;

    if(!str)
        return  0;
    while(str[i])
    {
        if(str[i] == '\n')
            return i+1;
        i++;
    }
    return i;
} 

char	*ft_strjoin(char *s1, char *s2)// join da strig.
{
    int i;
    int j;
    int len1;
    int len2;
    char *s3;

    i = 0;
    j = 0;
    len1 = ft_linelen(s1);
    len2 = ft_linelen(s2);
    s3 = malloc(len1+ len2 + 1);
    if(!s3)
        return NULL;
    while(i < len1)
        s3[j++] = s1[i++];
    i = 0;
    while(i < len2)
        s3[j++] = s2[i++];
    s3[j] = '\0';
    free(s1);
    return s3;
}

void ft_shiftbuffer(char *buffer) // limpar e preparar para a proxima linha.
{
    int i = 0;
    int j = 0;
    
    while(buffer[i] && buffer[i] != '\n')
        i++;
    if(buffer[i] == '\n')
        i++;
    while(buffer[i])
        buffer[j++] = buffer[i++];
    while(j < BUFFER)
        buffer[j++] = '\0';
}