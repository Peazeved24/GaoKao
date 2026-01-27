/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:52:31 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:54:57 by peazeved         ###   ########.fr       */
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


int main(int ac, char **av)
{

    if(ac == 3)
    {
        int x = 0;
        int i = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        char s[256] = "";

        
        while(s1[i])
        {
            if(ft_strchr(s2, s1[i]) && !ft_strchr(s, s1[i]))
            {
                s[x++] = s1[i];
                s[x] = '\0';
            }
            i++;
        }
        write(1, s , x);
    }
    write(1, "\n", 1);
    return 0;
}