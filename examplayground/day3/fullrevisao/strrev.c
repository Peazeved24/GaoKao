/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:41:06 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/25 14:47:37 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
char    *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char tmp;
    while(str[len])
        len++;
    while(i < len - 1)
    {
        tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
    }
    return str;
}

int main()
{
    char str[] = "ola";
    printf("%s", ft_strrev(str));
    return 0;
}