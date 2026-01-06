/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 14:04:52 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/27 14:18:54 by peazeved         ###   ########.fr       */
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

        while(str[i]) // ate ao fim
            i++;
        i--;
        while(ft_space(str[i])) // removemos os espacos do fim.
            i--;
        int end = i;
        while(str[i] > 0 && !ft_space(str[i])) // estamos no inicio da msm;
            i--;
        i++;
        int start = i;
        while(start <= end)
            write(1, &str[start++], 1);
    }
    write(1, "\n", 1);
    return 0;
}   