/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:10:55 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 15:16:30 by peazeved         ###   ########.fr       */
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
        i++;
        n /= 10;
    }
    return i;
}

char *ft_itoa(int nbr)
{
    int neg = 0;
    long n = nbr;
    int len = ft_nlen(nbr);
    int i = 0;
    char *s = malloc(len + 1);
    if(!s)
        return NULL;
    s[len] = '\0';
    if(n == 0)
    {
        s[0] = 0;
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
        n/= 10;
    }
    if(neg)
        s[0] = '-';
    return s;
}
int main()
{
    int n = -90;
    printf("%s", ft_itoa(n));
    return 0;
}