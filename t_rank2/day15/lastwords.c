/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastwords.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:31:50 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 12:41:17 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];

        while(s[i]) // nofim.
            i++;
        i--;
        while(ft_space(s[i])) // primeiro espaco do fim.
            i--;
        int end = i; // salvo.
        while(!ft_space(s[i])) // inicio da minha palavra.
            i--;
        i++;
        int start = i;
        while(start <= end)
            write(1, &s[start++], 1);        
    }
    write(1, "\n", 1);
    return 0;
}
