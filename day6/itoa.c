/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:16:30 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/27 15:40:41 by peazeved         ###   ########.fr       */
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
char	*ft_itoa(int nbr)
{
    long n = nbr;
    int len = ft_nlen(n);
    int i = 0;
    int neg = 0;
    char *str = malloc(len + 1);
    if(!str)
        return NULL;
    str[len] = '\0';
    if(n == 0)
    {
        str[0] = '0';
        return str;
    }
    if(n < 0)
    {
        neg = 1;
        n = -n;
    }
    while(len > 0)
    {
        str[--len] = n % 10 + '0';
        n /= 10;
    }
    if(neg)
    {
        str[0] = '-';
    }
    return str;
}

int main()
{
    int nbr = 2147483647;
    printf("%s" , ft_itoa(nbr));
    return 0;
}