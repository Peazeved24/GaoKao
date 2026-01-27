/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:20:19 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/28 15:19:05 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return i;
}

void  ft_putstr(char *str)
{
    int i = 0;

    
    while(str[i])
        write(1, &str[i++], 1);
}
int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = av[1];
        char *s2 = av[2];
        int res = 0;
        int f = 1;
        int len  = ft_strlen(s1);
        while(s1[i] && s2[j])
        {
        }
        if(len == res)
            ft_putstr(s1);
    }
    write(1, "\n", 1);
    return 0;
}
