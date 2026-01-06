/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 13:48:13 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 14:54:57 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
*/ 


int ft_gb(char c, int base)
{
    char digits[] = "0123456789abcdef";
    int i = 0;

    if(base < 2 || base >16)
        return -1;
    if(c >= 'A' && c <= 'Z')
        c+= 32;
    
    while(i < base)
    {
        if(digits[i] == c)
            return i;
        i++;
    }
    return -1;
}

int	ft_atoibase(const char *str, int str_base)
{
    int i = 0;
    int r = 0;
    int s = 1;
    int n;

    if(!str)
        return 0;
    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if(str[i] == '-')
    {
        s = -1;
        i++;
    }
    while(str[i])
    {
        n = ft_gb(str[i], str_base);
        if(n == -1)
            break;
        r = r * str_base + n;
        i++;
    }
    return (r * s);
}

int main()
{ 
    int base = 16;
    char c[] = "12fdb3";

    printf("%i", ft_atoibase(c,base));

    return 0;
}