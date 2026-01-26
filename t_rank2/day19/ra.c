/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:21:20 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/15 15:28:01 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_ra(char c)
{
    if(c >= 'a' && c <='z')
        return c + 1 -'a';
    return 0;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        
        while(str[i])
        {
            int result = ft_ra(str[i]);
            while(result--)
                write(1, &str[i], 1);
            i++;
        }
    }
    return 0;
}