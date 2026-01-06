/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:48:05 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:52:23 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_rot13(char c)
{
    if(c >= 'a' && c <= 'z')
        return c = 'a' + ((c - 'a' ) + 13)% 26; 
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *s1 = av[1];
        int i = 0;

        while(s1[i])
        {
            char result = ft_rot13(s1[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}