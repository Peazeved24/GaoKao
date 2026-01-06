/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:42:14 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 15:00:06 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"



int main(int ac, char **av)
{
    if(ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        
        while(n2 != 0)
        {
            int temp = n2;
            n2 = n1 % n2;
            n1 = temp;
        }
        printf("%i", n1);
    }
    printf("\n");
    return 0;
}