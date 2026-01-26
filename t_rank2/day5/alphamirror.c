/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:05:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 18:09:43 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_am(char c)
{
    if(c >= 'a' && c <= 'z')
        return 'z' - (c - 'a') % 26;
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];

        while(s[i])
        {
            char result = ft_am(s[i]);
            write(1, &result, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}

// /"My horse is Amazing."