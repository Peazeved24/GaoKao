/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:47:44 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 13:50:46 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_ra(int c)
{
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];
        while(s[i] != '\0')
        {
            char c = ft_ra(s[i]);
            while(c--)
                write(1, &s[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

