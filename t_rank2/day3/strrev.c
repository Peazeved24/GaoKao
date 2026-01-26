/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:36:00 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:47:14 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
/*
    char    *ft_strrev(char *str);
*/


void ft_swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int l = 0;
    
    while(str[l])
        l++;
    l--;

    while(i < l) // rev
    {
        ft_swap(&str[i], &str[l]);
        i++;
        l--;
    }
    return str;
}
int main()
{
    char s[]= "abc";
    char *result = ft_strrev(s);
    printf("%s", result);
}