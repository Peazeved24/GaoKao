/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:09:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 12:20:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_cd(int n)
{
	int i =0;
	if(n <= 0)
		i++;
	while(n != 0)
	{
		i++;
		n /= 10;
	}
	return i;
}
char	*ft_itoa(int nbr)
{
	long n = nbr;
	int len = ft_cd(nbr);
	int neg = 0;
	char *str = malloc(len +1);
	if(!str)
		return 	NULL;
	str[len] = '\0';

	if(n  == 0)
	{
		str[0] = '0';
		return str;		
	}
	if(n < 0)
	{
		n = -n;
		neg = 1;
	}
	while(len > 0)
	{
		str[--len] = n % 10 + '0';
		n/=10; 
	}
	if(neg)
		str[0] = '-';
	return str;
}
int main()
{
	int a = 2147483647;
	printf("%s", ft_itoa(a));
	return 0;
}