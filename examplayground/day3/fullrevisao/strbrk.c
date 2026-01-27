/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strbrk.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:27:53 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/25 14:39:35 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                return (char*)&s1[i];
                break;
            }
            j++;
        }
        i++;
    }
    return NULL;
}

int main()
{
    char *s1 = "hello world";
    char *s2 = "aeihou";

    printf("%s", ft_strpbrk(s1, s2));
    return 0;
}