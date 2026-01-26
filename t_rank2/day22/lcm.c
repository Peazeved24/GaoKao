/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 13:56:34 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 14:10:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_hcf(int a, int b)
{
    while(b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    return ((a / ft_hcf(a, b)) * b);
}
int main()
{
    printf("%i\n", lcm(30 , 42));   
    return 0;
}