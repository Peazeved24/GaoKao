/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 12:59:18 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/25 13:02:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] && s2[j])
    {
        if(s1[i] != s2[j])
            return s1[i] - s2[j];
        i++;
        j++;
    }
   return s1[i] - s2[j];
    
}

int main()
{
    char *s1  = "ola mundo";
    char *s2 = "OLa";
    printf("%i\n", strcmp(s1, s2));
    printf("%i\n", ft_strcmp(s1, s2));
    return 0;
}