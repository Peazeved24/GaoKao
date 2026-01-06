/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:26:42 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 16:42:56 by peazeved         ###   ########.fr       */
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

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int x = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        char nibba[256] = "";
        
        while(s1[i])
        {
            char c = s1[i];
            if(!ft_strchr(nibba, c))
            {
                nibba[x++] = c;
                write(1 ,&c, 1);
            }
            i++;
        }
       i = 0;
       while(s2[i])
       {
            char c = s2[i];
            if(!ft_strchr(nibba, c))
            {
                nibba[x++] = c;
                write(1, &c, 1);
            }
            i++;
       }
    }
    write(1,"\n", 1);
    return 0;
}

/*
"rien" "cette phrase ne cache rien"
*/