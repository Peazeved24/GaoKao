/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:27:05 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 15:29:37 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strchr(char *s, char c)
{
    while(*s)
    {
        if(*s == c)
            return (char*)s;
        s++;
    }
    return 0;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int x = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        char s3[256] = "";

        while(s1[i])
        {
            if(ft_strchr(s2, s1[i]) && !ft_strchr(s3, s1[i]))
            {
                s3[x++] = s1[i];
                s3[x] = '\0';
            }
            i++;
        }
        write(1, s3, x);
        
    }
    return 0;
}