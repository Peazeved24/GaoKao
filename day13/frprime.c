/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frprime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:41:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 15:51:26 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = atoi(av[1]);
        int i = 2;
        int f = 1;
        
        while(n > 1)
        {
            if(n % i == 0)
            {
                if(!f)
                    printf("*");
                printf("%d", i); 
                n = n / i;  
                f = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}