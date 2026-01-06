/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:47:24 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:59:13 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == 32 || c >= 9 && c<= 13);
}

int ft_cw(char *s)
{
    int i = 0;
    int c = 0;

    while(s[i])
    {
        while(s[i] && ft_space(s[i]))
                i++;
        if(s[i])
        {
            c++;
            while(s[i] && !ft_space(s[i]))
                i++;
        }
    }
    return c;
}
char    **ft_split(char *str);
int main()
{
    char *s = "ola mundo tudo bem";
    printf("%i", ft_cw(s));
    return 0;
}