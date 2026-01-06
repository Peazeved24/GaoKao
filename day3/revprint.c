/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 00:12:15 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/22 00:13:49 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_revstr(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    i--;
    
    while(i >= 0)
        write(1, &str[i--], 1);
}

int main()
{
    char *str = "Pedro";
    ft_revstr(str);
    return 0;
}