/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:10:07 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 13:49:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_space(char c)
{
    return ((c >= '9' && c <= 13) || c == 32);
}

int main(int ac, char **av)
{
    if(ac == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    
    int i = 0;
    char *s = av[1];
    int i_w = 1; // i did print a word.
    
    while(s[i] && ft_space(s[i]))
        i++;
    int start = i;

    while(s[i] && !ft_space(s[i]))
        i++;
    int end = i-1;

    while(ft_space(s[i])) // space in front of my 1st word  == removed
        i++;
        
    while(s[i]) // at my new 1 word;
    {
        if(!ft_space(s[i]))
        {
            write(1, &s[i], 1);
            i_w = 0;
        }
        else if(!i_w)
        {
            write(1, " ", 1);
            i_w = 1;
        }
        i++;
    }
    if(end > start)
    {
        while(start <= end)
        {
            if(!i_w)
                write(1, " ", 1);
            write(1, &s[start++], 1);
            i_w = 1;
        }
    }

 
    return 0;
}
/*
    "    AkjhZ zLKIJz , 23y   "
*/