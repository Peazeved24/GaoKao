/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:19:21 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 16:35:09 by peazeved         ###   ########.fr       */
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

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    while(s[i])
    {
        if(ft_strchr(reject, s[i]))
        {
            break;
        }
        i++;
    }
    return i;
}

int main()
{
    char *s = "hello word";
    char *r = "123";
    printf("%li\n", strcspn(s, r));
    printf("%li\n", strcspn(s, r));
    return 0;
}