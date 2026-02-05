/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 15:34:06 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/05 15:42:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_cd(int n)
{
    int i = 0;

    if(n <= 0)
        i++;
    while(n != 0)
    {
        i++;
        n/=10;
    }
    return i;
}

char	*ft_itoa(int nbr)
{
    long n = nbr;
    int len = ft_cd(n);
    int neg = 0;
    char *s = malloc(len + 1);
    if(!s)
        return NULL;
    s[len] = '\0';

    if(n == 0)
    {
        s[0] = '0';
        return s;
    }
    if(n < 0)
    {
        n = -n;
        neg = 1;
    }

    while(len > 0)
    {
        s[--len] = n % 10 + '0';
        n/=10;
    }
    if(neg)
        s[0] = '-';
    return  s;
}

int main()
{
    int n = -90;
    printf("%s", ft_itoa(n));
    return 0 ;
}