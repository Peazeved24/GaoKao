/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbrk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:51:53 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/23 16:59:34 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ftstrchr(char *s, char c)
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
    int i = 0 ;
    while(s1[i])
    {
        if(ftstrchr(s2, s1[i]))
            return (char *)s1;
        i++;
    }
    return NULL;
}

int main()
{
    return 0;
}