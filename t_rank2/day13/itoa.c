/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:26:56 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 15:35:34 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_nlen(int n)
{
    int i =0;
    if(n <= 0)
        i++;
    while(n != 0)
    {
        n /= 10;
        i++;
    }
    return i;
}
char *ft_itoa(int nbr)
{
    long n = nbr;
    int neg = 0;
    int len = ft_nlen(nbr);
    char *str = malloc(len + 1);
    if(!str)
        return NULL;
    str[len] = '\0';

    if(nbr == 0)
    {
        str[0] = '0';
        return str;
    }
    if(nbr < 0)
    {
        neg = 1; 
        n = -n;
    }
    while(len >= 0)
    {
        str[--len] = n % 10 + '0';
        n /= 10;
    }
    if(neg)
        str[0] = '-';
    return str;
}

int main()
{
    int a = -9000;
    printf("%s", ft_itoa(a));
    return 0;
} 