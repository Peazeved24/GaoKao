/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:09:48 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/30 16:11:36 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_r13(int c)
{
    if(c >= 'a' && c <= 'z')
        return 'a' + ((c - 'a') + 13) % 26;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        while(str[i])
        {
            char result = ft_r13(str[i]);
            write(1, &result,1 );
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}