/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:04:42 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/25 15:14:58 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        int ascii[256] = {0};
        char *s1 = av[1];
        char *s2 = av[2];
        while(s1[i])
        {
            j = 0;
            while(s2[j])
            {
                if(s1[i] == s2[j])
                {
                    if(ascii[s1[i]] == 0)
                    {
                        ascii[s1[i]] = 1;
                        write(1, &s1[i], 1);
                    }
                    break;
                }
                j++;
            }
            i++;
        }
    }   
    write(1, "\n" ,1);
    return 0;
}