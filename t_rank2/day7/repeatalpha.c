/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:29:41 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 13:39:40 by peazeved         ###   ########.fr       */
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
        
        while(s[i])
        {
            char result = ft_ra(s[i]);
            while(result > 0)
            {
                write(1, &s[i], 1);
                result--;
            }
            i++;
        }
    }
    write(1,"\n", 1);
    return 0;
}