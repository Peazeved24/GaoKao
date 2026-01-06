/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstrcap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 14:03:29 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/01 14:46:20 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int ft_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_islower(char c)
{
    return (c >= 'a' && c <= 'z');
}

void ft_rst_cap(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(ft_isupper(str[i]))
            str[i] += 32;
        if(ft_islower(str[i]) && (ft_space(str[i+1]) || str[i+1] == '\0'))
            str[i] -= 32;
        write(1, &str[i++], 1);
    }
}

int main(int ac, char **av)
{

    if(ac < 2)
        write(1, "\n", 1);
    else
    {
        int i = 1;
        while(i < ac)
        {
            ft_rst_cap(av[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    return 0;
}
/*
    "a oLA mundo"
     A - 
*/