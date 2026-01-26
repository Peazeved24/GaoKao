/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:46:36 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 16:10:17 by peazeved         ###   ########.fr       */
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
        while(i * i <= n)
        {
            while(n % i == 0)
            {   
                if(!f)
                    printf("*");
                printf("%i", i);
                n /= i; 
                f = 0;
            }
            i++;
        }
        if(n> 1)
        {
            if(!f)
                printf("*");
            printf("%d", n);
        }
    }
    write(1, "\n", 1);
    return 0;
}


//add prime sum ,slipt