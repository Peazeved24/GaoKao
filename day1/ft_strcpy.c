/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:18:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/08 16:31:25 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char    *ft_strcpy(char *s1, char *s2)
{
    if(!s1 || !s2)
        return NULL;
    int i = 0;
    int j = 0;
    while(s2[i])
        s1[j++] = s2[i++];
    s1[j] = '\0';
    return s1;
}

int main()
{
    char s1[100] = "";
    char s2[100] = "mundo";
    char *result2 = strcpy(s1, s2);
    char *result1 = ft_strcpy(s1, s2);
    printf("%s\n", result1);
    return 0;
}