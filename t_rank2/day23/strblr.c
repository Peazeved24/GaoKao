/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strblr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:31:03 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:40:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


char *ft_strchr(const char *s, char c)
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
    if(!s1 || !s2)
        return 0;
    while(s1[i])
    {
        if(ft_strchr(s2, s1[i]))
            return (char *)&s1[i];
        i++;
    }
    return 0;
}

int main()
{
    const char *s1 = "ola";
    const char *s2 = "ppk";
    char *p = ft_strpbrk(s1, s2);
    
    if(p)   
        printf("%c\n", *p);
    else
        printf("fck its null\n");
    return 0;
}