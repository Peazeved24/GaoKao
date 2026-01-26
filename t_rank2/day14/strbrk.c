/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbrk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:47:00 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 16:13:35 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(char *s, char c)
{
    while(*s)
    {
        if(*s == c)
            return (char *)s;
        s++;
    }
    return 0;
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    
    while(*s1)
    {
        if(ft_strchr((char *)s2, *s1))
            return (char *)s1;
        s1++;
    }
    return 0;
}
