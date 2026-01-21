/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:59:52 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/20 15:59:10 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}

int main(int ac, char **av)
{
    if(ac == 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    char *str = av[1];
    int f = 0;
    while(str[i] && ft_space(str[i]))
        i++;
    int start  = i;
    while(str[i] && !ft_space(str[i]))
        i++;
    int end = i-1;
    while(ft_space(str[i]))
        i++;
    while(str[i])
    {
        if(!ft_space(str[i]))
        {
            if(!f)
                f = 1;
            write(1, &str[i], 1);
        }
        else if(f)
        {
            write(1, " ", 1);
            f = 0;
        }
        i++;
    }
    if(end >= start)
    {
        if(f)
            write(1, " ", 1);
        while(start <= end)
             write(1, &str[start++],1);
    }
    
    return 0;
}