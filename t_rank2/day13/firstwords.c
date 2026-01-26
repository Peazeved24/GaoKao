/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstwords.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 14:52:24 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 15:01:31 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        
        
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        int start = i;
        while(str[start])
        {
            if(str[start] != ' ' && str[start] != '\t')
                ft_putchar(str[start]);
            else
                break;
            start++;  
        }
        
    }
    write(1, "\n", 1);
    return 0;
}