/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:06:22 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:07:29 by peazeved         ###   ########.fr       */
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
    char *s = "Ola";
    printf("%i", ft_strlen(s));
    return 0;
}