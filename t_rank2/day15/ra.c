/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:32:02 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 19:40:02 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_ra(char c)
{
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 1;
    if(c >='A' && c <= 'Z')
        return c -'A' + 1;
    
    return 1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];
        
        while(s[i])
        {
            int result = ft_ra(s[i]);
            while(result--)
            {
                write(1, &s[i] ,1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}