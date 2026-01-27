/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:38:34 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 14:39:43 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_putstr(char *str)
{
    int i = 0;

    while(str[i])
        write(1, &str[i++], 1);
}

int main()
{
    char a[] = "ola mundo";
    ft_putstr(a);
    return 0;
}