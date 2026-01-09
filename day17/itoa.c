/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 14:32:51 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 15:09:43 by peazeved         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	long nbr = n;
	int i = 0;
	int len = ft_nlen(nbr);
	char *str = malloc(len + 1);
	int neg = 0;
	if(!str)
		return NULL;
	str[len] = '\0'; // end te == legit string.
	if(nbr == 0)
	{
		str[0] = '0';
		return str;
	}
	if(nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	while(len > 0)
	{
		str[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if(neg)
		str[0] = '-';
	return str;
}
//2147483648
int main()
{
	int n = 2147483647; // 3 digitos;    //
	printf("%s", ft_itoa(n));
	return 0;
}