/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:53:28 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/30 18:02:44 by peazeved         ###   ########.fr       */
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
        char str[256] ;
        
        while(s1[i])
        {
            char c = s1[i];
            if(ft_strchr(s2, s1[i]) && !ft_strchr(str, c))
            {
                str[x] = s1[i];
                write(1, &str[x++], 1);
            }
            i++;
        }
        str[x] = '\0';
    }
    write(1, "\n", 1);
    return 0;
}