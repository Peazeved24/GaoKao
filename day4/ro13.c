/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ro13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:35:47 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/24 14:44:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_r13(int c)
{
    if(c >= 'a' && c <= 'z')
        return 'a' + ((c - 'a') + 13 )% 26;
    else  if(c >= 'A' && c <= 'Z')
        return 'A' + ((c - 'A') + 13 )% 26;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;

        while(str[i])
        {
            char result = ft_r13(str[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}