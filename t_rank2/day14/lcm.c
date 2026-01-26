/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:13:56 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 16:22:45 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_hcf(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;   
    }
    return a;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    return (a / ft_hcf(a,b) * b);
}

int main()
{
    printf("%i\n", lcm(30,42));
    return 0;
}