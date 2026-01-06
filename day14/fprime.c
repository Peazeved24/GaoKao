/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:23:38 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 16:25:24 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int main(int ac, char **av)
{
    int n = atoi(av[1]);
    int i= 2;
    int  f= 1;
    while(n >= 2)
    {
        while(n % i == 0)
        {
            if(!f)
                printf("*");
            printf("%i", i);
            n/= i;
            f = 0;
        }
        i++;
    }
    return 0;
}