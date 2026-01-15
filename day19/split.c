/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:09:51 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/15 15:20:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return((c >= 9 && c <= 13 || c == 32));
}

int ft_cw(char *str)
{
    int i = 0;
    int ct = 0;

    while(str[i])
    {
        while(str[i] && ft_space(str[i]))
            i++;
        if(str[i])
        {
            ct++;
            while(str[i] && !ft_space(str[i]))
                i++;
        }
    }
    return ct;
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int len = ft_cw(str);
    char **ar = malloc(sizeof(char *) * (len + 1));
    if(!ar)
        return NULL;
    
    while(str[i])
    {
        while(str[i] && ft_space(str[i]))
            i++;
        if(str[i])
        {
            int start = i;
            while(str[i] && !ft_space(str[i]))
                i++;
            int end = i - start;
            
            ar[j]= malloc(end + 1);
            if(!ar)
                return NULL;
            
            int k = 0;
            while(k < end)
            {
                ar[j][k] = str[start + k];
                k++;
            }
            ar[j][k] = '\0';
            j++;
        }
    }
    ar[j] = NULL;
    return ar;
}

int main()
{
    char *str = " ola mundo tudo bem";
    char **ar = ft_split(str);
    int i = 0;

    while(ar[i])
        printf("%s->", ar[i++]);
    return 0;
}