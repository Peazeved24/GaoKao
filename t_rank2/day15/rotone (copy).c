/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:14:04 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:17:54 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_rotone(char c)
{
    if(c >= 'a' && c <= 'z')
        return  'a' + ((c - 'a') + 1) % 26;  
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];

        while(s[i])
        {
            char r = ft_rotone(s[i]);
            write(1, &r, 1);
            i++;
        }
    }
    write(1, "\n",1);
    return 0;
}