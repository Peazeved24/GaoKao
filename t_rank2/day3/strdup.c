/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:32:04 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:35:41 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *s)
{
    int i = 0;

    while(s[i])
        i++;
    return i;
}


char *ft_strdup(char *s1)
{
    int i = 0;
    int len = ft_strlen(s1);
    char *s2 = malloc(len + 1);
    if(!s2)
        return NULL;
    while(s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return s2;
}

int main()
{
    char *s1 = "ola";
    char *result = ft_strdup(s1);
    printf("%s", result);
    return 0;
}