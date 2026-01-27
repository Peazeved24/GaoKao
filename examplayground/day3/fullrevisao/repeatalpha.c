/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:46:42 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:55:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

    int ft_repeat(char c)
    {
        if(c >= 'a' && c <= 'z')
            return (c - 'a') + 1;
        else if(c >= 'A' && c <= 'Z')
           return  (c - 'A') + 1;
        else
            return 1;
    }

    int main(int ac , char **av)
    {
        if(ac == 2)
        {
            int i = 0;
            char *str = av[1];

            while(str[i])
            {
                int result = ft_repeat(str[i]);
                while(result--)
                {
                    write(1, &str[i], 1);
                }
                i++;
            }
        }
        write(1, "\n", 1);
        return 0;
    }