/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:34:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 14:36:31 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_revprint(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    i--;
    while(i >= 0)
        write(1, &str[i--], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *s = av[1];
        
        ft_revprint(s);
    }
    write(1, "\n", 1);
    return 0;
}