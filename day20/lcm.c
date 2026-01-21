/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:54:55 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/20 12:58:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_hcm(int a , int b)
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
    return((a / ft_hcm(a, b)) * b);
}

int main()
{
    unsigned int a = 30;
    unsigned int b = 42; 
    printf("%u", lcm(a,b));
    return 0;
}