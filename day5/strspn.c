/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 16:20:39 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 17:57:01 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int c = 0;
    int f;
    
    while(s[i])
    {
        j = 0; // reset para ler a string por chamada.
        f = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
            {
                f = 1;
                c++;
                break;
            }
            j++;
        }
        if(!f)
            break;
        i++;
    }
    return c;
}

int main()
{
    char *s = "123123ola123456";
    char *accept = "123456";

    size_t l1 = strspn(s, accept);
    size_t l2 = ft_strspn(s, accept);

    printf("strspn: %zu\n", l1);
    printf("ft_strspn: %zu\n", l2);

    return 0;
}



