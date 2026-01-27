/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstcap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:40:52 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:49:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int ft_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_lower(char c)
{
     return (c >= 'a' && c <= 'z');
}

void ft_rstcapitalizer(char *s)
{
    int i = 0;

    while(s[i])
    {
        if(ft_upper(s[i]))
            s[i] = s[i] + 32;
        i++;
    }
    i = 0;
    while(s[i])
    {
        if(ft_space(s[i+1]) && ft_lower(s[i]))
        {
            s[i] = s[i] - 32;
        }
        else
        {
            if(ft_lower(s[i]) &&  s[i+1] == '\0')
                s[i] = s[i] - 32;
        }
        write(1, &s[i++], 1);
    }
    
}

int main(int ac, char **av)
{
    if(ac == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 1;
    while(i < ac)
    {
        ft_rstcapitalizer(av[i++]);
        write(1, "\n", 1);
    }
    return 0;
}