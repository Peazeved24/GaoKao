/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:40:26 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 13:48:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int f = 0;
    
    while(s[i])
    {
        j = 0;
        f = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
            {
                count++;
                f = 1;
                break;
            }
            j++;
        }
        if(!f)
            break;
        i++;
    }
    return count;
}

int main()
{
    char *s = "Abcabc123";
    char *accpt = "abA321";

    printf("%lu\n", strspn(s, accpt));
    printf("%lu\n", ft_strspn(s, accpt));
    return 0;
}

/*
    -manipualao de string onde ha uma ordem a ser respeitada.
*/