/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:14:08 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:17:00 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while(s1[i] || s2[j])
    {
        if(s1[i] != s2[j])
            return (s1[i] - s2[j]);
        i++;
        j++;
    }
    return 0;
}

int main()
{
    char *s1 = "aa";
    char *s2 = "aab";

    printf("%i\n", ft_strcmp(s1, s2));
    printf("%i", strcmp(s1, s2));
    return 0;
}