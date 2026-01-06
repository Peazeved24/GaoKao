/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:11:58 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 14:19:27 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_nlen(int nbr)
{
    int i = 0;
    if(nbr <= 0)
        i++;
    while(nbr != 0)
    {
        i++;
        nbr/=10;
    }
    return i;
}

char	*ft_itoa(int nbr)
{
    int len = ft_nlen(nbr); // len do meu numero;
    long n = nbr;
    char *str = malloc(len + 1);
    int neg = 0;
    if(!str)
        return NULL;
    str[len] = '\0';
    
    if(n  == 0)
    {
        str[0] = '0';
        return str;
    }
    if(n < 0)
    {
        neg = 1;
        n = -n;
    }
    while(n > 0)
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
    int n = 2147483647;
    printf("%s", ft_itoa(n));
    return 0;
}