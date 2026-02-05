/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:44:01 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/02 15:54:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i] && ft_space(str[i]))
            i++;
        while(str[i] && !ft_space(str[i]))
            i++;
        while(str[i])
            i++;
        i--;
        while(i >= 0 && ft_space(str[i]))
            i--;
        int end = i;
        while(i > 0 && !ft_space(str[i]))
            i--;
        int start = i+1;

        while(start <= end)
            write(1, &str[start++], 1);
    }
    write(1, "\n", 1);
    return 0;
}

//"FOR PONY "