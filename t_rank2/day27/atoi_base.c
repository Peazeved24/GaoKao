/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:02:29 by peazeved          #+#    #+#             */
/*   Updated: 2026/02/09 16:46:21 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"




int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int s = 1;
    int n = 0;
    int result = 0;
    
  
    if (str_base < 2 || str_base > 16) // entender os limites
        return 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) // lidar com espacos e simbolos
        i++;

    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }

    while(str[i]) // criacao do num
    {
        if(str[i] >= '0' &&  str[i] <= '9') // thsi part -- number only
            n = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f') //  HEXADECIMALS ONLY
            n =  str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')//  HEXADECIMALS ONLY
            n = str[i] - 'A' + 10;
        else
            break;
        if(n >= str_base)
            return 0;
        result = result * str_base + n; // formula
        i++;
    }
    return result * s;
}

int main()
{
    const char *s = "FF";
    int  str_base = 16;
    printf("%i", ft_atoi_base(s, str_base));
    return 0;
}