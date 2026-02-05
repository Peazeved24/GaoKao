/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:22:59 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 15:26:34 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];

        while(s[i])
        {
            if(ft_lower(s[i]))
                s[i] = s[i] - 32;
            else if(ft_upper(s[i]))
                s[i] = s[i] + 32;
            write(1, &s[i++], 1);
        }
    }
    return 0;
}