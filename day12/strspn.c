/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:13:08 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/03 12:23:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(const char *s, char c)
{
    while(*s)
    {
        if(*s == c)
        {
            return (char*) s;
        }
        s++;
    }
    if(c == '\0')
        return (char*)s;
    return 0;
}


size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    
    while(s[i])
    {
        if(ft_strchr(accept, s[i]))
        {
            i++;
        }
       else
        break;
    }
    return i;
}

int main()
{
    char *s1 = "acb";
    char *s2 = "abc";

    printf("%li\n", strspn(s1, s2));
    printf("%li", ft_strspn(s1, s2));
    return 0;
}