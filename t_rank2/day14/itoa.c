/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:49:00 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/05 14:59:24 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_nlen(int n)
{
    int i = 0;

    if(n <= 0)
        i++;
    while(n != 0)
    {
        n/=10;
        i++;
    }
    return i;
}

char *ft_itoa(int nbr)
{
    long n = nbr;
    int i = 0;
    int neg= 0;
    int len = ft_nlen(n);
    char *s = malloc(len + 1);
    
    if(n == 0)
    {
        s[0] = '0';
        return s;
    }
    if(n < 0)
    {
        neg = 1;
        n = -n;
    }
    while(len >= 0)
    {
        s[--len] = n % 10 + '0';
        n /=10;
    }
    if(neg)
        s[0] = '-';
    return s;
}

int main(int  ac , char **av)
{
    int i = -90;
    printf("%s", ft_itoa(i));
    return 0;
}