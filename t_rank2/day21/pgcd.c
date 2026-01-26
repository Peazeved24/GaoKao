/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:59:55 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/23 17:10:09 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_pgcd(int a, int b)
{
    while(b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main(int ac, char **av)
{

    printf("%i",ft_pgcd(42, 12));
        
    return 0;
}