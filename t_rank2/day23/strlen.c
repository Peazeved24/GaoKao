/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 15:45:02 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 15:45:49 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int main()
{
    char *s = "ola";
    printf("%i", ft_strlen(s));
    return 0;
}