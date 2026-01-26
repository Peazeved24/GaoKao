/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:18:42 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/02 13:37:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
char    *ft_strcpy(char *s1, char *s2)
{
    
    int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}
int main(int ac, char **av)
{
    char s1[100] = "";
    char s2[100] = "ola";
    printf("%s", ft_strcpy(s1, s2));
    return 0;
}
