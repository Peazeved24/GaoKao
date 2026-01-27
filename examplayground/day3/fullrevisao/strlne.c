/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlne.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:42:35 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:44:42 by peazeved         ###   ########.fr       */
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
    char a[] = "ola";
    printf("%i", ft_strlen(a));
    return 0;
}