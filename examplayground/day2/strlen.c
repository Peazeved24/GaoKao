/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:01:26 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/12 15:02:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return i;
}

int main()
{
    char *str = "ola";
    printf("%i", ft_strlen(str));
    return 0;
}