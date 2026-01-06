/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:19:48 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 13:27:35 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_revprint(char *s)
{
    int i = 0;

    while(s[i])
        i++;
    i--;

    while(i >= 0)
        write(1, &s[i--], 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *s = av[1];
        ft_revprint(s);
    }
    return 0;
}