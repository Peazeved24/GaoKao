/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:41:44 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/02 15:43:29 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        while(str[i])
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            else if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
            write(1, &str[i++], 1);
        }
    }
    write(1,"\n", 1);
    return 0;  
}