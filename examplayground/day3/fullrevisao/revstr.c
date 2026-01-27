/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:56:44 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/21 15:00:26 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void *rev_str(char *str)
{
    if(!str)
        return  NULL;
    int i = 0;
    while(str[i]) // ir ate ao fim.
        i++; // estmao no comeco do fim,.

    while(i--)
    {
        write(1, &str[i], 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        rev_str(str);
    }
    write(1, "\n", 1);
    return 0;
}