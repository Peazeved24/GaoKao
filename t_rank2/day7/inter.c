/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:38:05 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 15:01:35 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


char *ft_strchr(char *s, char c)
{
    int i = 0;

    while(*s)
    {
        if(*s  == c)
            return  (char*)s;
        s++;
    }
    return 0;
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        char print[256] = ""; // e uma string que sera construida.
        int x = 0;
        
        while(s1[i])
        {
           char c = s1[i];
           if(ft_strchr(s2 ,c) && !ft_strchr(print, c))
           {
                write(1, &c, 1);
                print[x++] = c;
                print[x] = '\0';
           }
           i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}