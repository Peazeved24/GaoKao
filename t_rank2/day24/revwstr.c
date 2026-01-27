/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revwstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:08:57 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 17:15:51 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return ((c >= 9 && c <=13) || c== 32);
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        

        while(str[i])
            i++;
        i--;
        while(i >= 0)
        {
            int start = i;
            while(i>= 0 && !ft_space(str[i]))
                i--;
            int end = i+1;
            while(end <= start)
                write(1, &str[end++], 1);
            while(i >= 0 && ft_space(str[i]))
            {
                i--;
                write(1, " ", 1);
            }
        }
        
    }
    write(1, "\n", 1);
    return 0;
} 