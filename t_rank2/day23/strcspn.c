/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:46:11 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 15:55:55 by peazeved         ###   ########.fr       */
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

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;

    while(s[i])
    {
        if(ft_strchr(reject, s[i]))
            return i; 
        i++;
    }
    return 0;
}

int main()
{
    char *s = "ccola";
    char *s1 = "cla";
    printf("%li\n", strcspn(s, s1));
    printf("%li\n", ft_strcspn(s, s1));
    return 0;
}