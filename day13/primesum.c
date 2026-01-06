/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primesum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 16:00:10 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 16:07:46 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_prime(int n)
{
    
    int i = 2;
    if(n < 2)
        return 0;
    
    while(i * i <= n)
    {
        if(n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int main(int ac, char **av)
{
    int n = atoi(av[1]);
    int sum = 0;
    int i = 2;

    while(i <= n)
    {
        if(ft_prime(i))
            sum += i;
        i++;
    }
    printf("%i", sum);
    return 0;
}