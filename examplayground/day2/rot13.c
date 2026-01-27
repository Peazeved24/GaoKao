/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:00:04 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/12 14:26:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_rot13(char c)
{
    if(c >= 'a' && c <= 'z')
        return  ((c - 'a' + 13)  % 26)+ 'a';
    else if(c >= 'A' && c <= 'Z')
        return  ((c - 'A' + 13)  % 26)+ 'A';
    else
        return c;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        while(str[i])
        {
            char result = ft_rot13(str[i]);
            ft_putchar(result);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

/*
 if(ac == 2)
    {
        
    }
    write(1, "\n", 1);
    return 0;*/