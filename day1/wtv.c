/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wtv.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 02:06:13 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/20 02:08:02 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"



int ft_rot13(char c)
{
    if(c >= 'a' && c <= 'z')
        return c = 'a' + ((c - 'a') + 13 )% 26;
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        while(str[i])
        {
            char result = ft_rot13(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}