/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:25:58 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:31:53 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char *ft_strcpy(char *s1, char *s2)
{
    if(!s1 || !s2)
        return NULL;
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
    char s1[] = "ola mundo";
    char s2[100] = "";

    printf("%s", ft_strcpy(s1, s2));
    return 0;
}