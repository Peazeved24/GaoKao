/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strev.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:28:32 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 13:35:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    
    while(str[i])
        i++;
    i--;

    while(j <  i)
    {
        ft_swap(&str[j], &str[i]);
        j++;
        i--;
    }
    return str;
}

int main()
{
    char s[] = "abc"; 
    printf("%s",ft_strrev(s));
    return 0;
}