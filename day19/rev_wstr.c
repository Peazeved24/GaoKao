/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:36:25 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/15 15:54:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' '||  c == '\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        int f = 1;
        while(str[i]) // ir de tras para a frente?
            i++;
        i--; // fim

        while(i > 0)
        {
            if(!f)
                write(1, " ", 1);
            int end = i;
            while(i >= 0 && !ft_space(str[i])) // inicio do meu espaco;
                i--;
            int start = i + 1;
            while(start <= end)
                write(1, &str[start++], 1);
            f = 0;
            i--;
        }
    }
    write(1, "\n", 1);
    return 0;
}

/*
    "Wingardium Leviosa"            -
*/