/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   am.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:31:23 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 14:37:26 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_am(int c)
{
    if(c >= 'a' && c<= 'z')
        return  'z' - (c - 'a');  
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i])
        {
            char result = ft_am(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}