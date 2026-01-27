/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:40:12 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:41:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while(s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return s2;
}

int main()
{
    char a[] = "ola mundo";
    char b[100];

    printf("%s\n", b);
    char *result = ft_strcpy(a, b);
    printf("%s\n", result);
    return 0;
}