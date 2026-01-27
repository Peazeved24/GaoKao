/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:51:08 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/24 15:57:14 by peazeved         ###   ########.fr       */
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

char    *ft_strdup(char *src) // retorna me a copia de um str.
{
    int i = 0;
    int len = ft_strlen(src);
    char *str = malloc(sizeof(char) * (len + 1)); // caixa com espaco
    if(!str)
        return  NULL;
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
    char *str =  "ola mundo";
    char *result = ft_strdup(str);
    printf("%s\n", result);
    return 0;
}