/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcspn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:57:20 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/24 15:11:15 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
            {
                return i;
            }
            j++;
        }
        i++;
    }
    return i;
}

int main()
{
    const char *s = "banana"; 
    const char *reject = "n";
    printf("%ld", ft_strcspn(s, reject));
    return 0;
}

// perorrer a string ate encontrar um valor do qual e proibido!
    // devolve o numero de chars que foram passados.
        // banana --- reject = n 
            // return 2 -=- b - pode . a -- pode, n - n pode
            