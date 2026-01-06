/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 12:43:11 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 12:45:18 by peazeved         ###   ########.fr       */
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

char *ft_strdup(char *str)
{
    int i = 0;
    int len = ft_strlen(str);
    char *s = malloc(len + 1);

    while(str[i])
    {
        s[i] = str[i];
        i++;
    }
    s[i] = '\0';
    return s;
}

int main()
{
    char *str = "ola";
    char *result= ft_strdup(str);

    printf("%s", result);
    return 0; 
}