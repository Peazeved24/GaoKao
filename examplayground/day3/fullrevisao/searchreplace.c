/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:21:12 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 15:30:57 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    if(ac == 4)
    {
        if(av[2][1] && av[3][1])
            return 1;
        int i = 0;
        
        
        while(av[1][i]) // enequanto a str n chega ao fim.
        {
            if(av[1][i] == av[2][0]) // char de procura.
            {
                av[1][i] = av[3][0]; // troca.
            }
            write(1, &av[1][i], 1);
            i++;
        }
        if(av[1][i] != av[2][0])
        {
              write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}