/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:42:16 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/24 14:53:47 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <string.h>

int ft_strcmp(const char *s1,const char *s2)
{
    int i = 0;

    while(s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main()
{
    char *s1 = "ola";
    char *s2 = "ola  ";
    printf("%i\n", ft_strcmp(s1, s2));
    printf("%i", strcmp(s1, s2));
    return 0;
}