/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:25:00 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 15:34:12 by peazeved         ###   ########.fr       */
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

unsigned int    ft_lcm(unsigned int a, unsigned int b)
{
    return a / ft_hcf(a, b) * b;
}

int main()
{
    int result = ft_lcm(30, 42);
    printf("%d", result);
    return 0;
}
