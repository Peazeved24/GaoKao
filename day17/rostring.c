/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:28:35 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 12:16:19 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
	return (c >= 9 && c <= 13 || c == 32);
}
int main(int ac, char **av)
{
	if(ac < 2)
	{
		write(1, "\n", 1);
		return 0;	
	}
	int i = 0;
	char *str = av[1];
	int iw = 0; // estado

	while(ft_space(str[i])) // espacos do inicio da 1st word.
		i++;
	int start = i;
	while(!ft_space(str[i]))
		i++;
	int end = i;
	while(ft_space(str[i]))
		i++;
	while(str[i])
	{
		if(!ft_space(str[i]))
		{
			if(!iw) // estou dentro de uma palavra?
				iw = 1;
			write(1, &str[i], 1);
		}
		else if(iw) // in ->out 
		{
			write(1, " ", 1);
			iw = 0; // out
		}
		i++;
	}
	if(end > start)
		write(1, " ", 1);
	while(start < end)
		write(1, &str[start++], 1);
	write(1, "\n", 1);
	return 0;
}	

/*

	- in + out === palavras que usamos para descrever estados.

	in == o ultimo char que li.
		-- o in e o P em porra.
		-- o in e o Z em Ze da manga etc.
	o out e o oposto..
		- out -- fora da palavra.
		-- tabs, espaco etc.

	- o truque desta nova abordagem esta na perpetiv:
			= no lugar de estar a verificar o char - (se e x, espaco etc)
		- eu vou procurar entender se 
			- eu estou num in ( dentro de uma palavra / comeco ) ou 
			num out -- fora(espacos , tabs etc)'
*/