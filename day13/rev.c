/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:02:37 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 15:05:01 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


void ft_swap(char *a, char *b)
{
    char t = *a;
    *a = *b;
    *b = t;
}
char *str_rev(char *str)
{
    int l = 0;
    int i = 0;
    while(str[l])
        l++;
    l--;

    while(l > i)
    {
        ft_swap(&str[l], &str[i]);
        l--;
        i++;
    }
    return str;
}

int main()
{
    char s[] = "ola mundo";
    printf("%s", str_rev(s));
    return 0;
}