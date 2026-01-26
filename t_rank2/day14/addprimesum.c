/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprimesum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:39:11 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 14:46:04 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_isprime(int n)
{
    int i = 2;

    while(i * i <= n) // descobrir se o numero e primo.
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int n = atoi(av[1]);
        int sum = 0;

        while(n >= 2)
        {
            if(ft_isprime(n) ==  1)
            {
                sum+= n;
            }
            n--;
        }
        printf("%i", sum);
    }
    return 0;
}