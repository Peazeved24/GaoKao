/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:39:01 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/15 15:02:28 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(const char *s, char c)
{
    while(*s)
    {
        if(*s == c)
            return (char*)s;
        s++;
    }
    return 0;
}

size_t ft_strspn(const char *str, const char *accept)
{
    size_t i = 0;
    while(str[i])
    {
        if(ft_strchr(accept, str[i]))
            i++;
        else
            break;
    }
    return i;
}

int main()
{
    const char *a = "abc";
    const char *b = "adiedebjdc";

    printf("%lu\n", strspn(a, b));
    printf("%lu\n", ft_strspn(a, b));
    return 0;
}