/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:50:11 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/27 16:57:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return s1[i] - s2[i];
}

int main()
{
    char *s1 = " ola";
    char *s2 = " o";
    printf("%i\n", strcmp(s1, s2));
    printf("%i\n", ft_strcmp(s1, s2));
    return 0;
}