/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:25:10 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/23 14:38:57 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


int main(int ac,char **av)
{
    if(ac == 4)
    {
        char s = av[2][0]; // meu simbolo.

        if(s == '+') // se esse for o valor passado.
            printf("%d", atoi(av[1]) + atoi(av[3]));
        else  if(s == '*') // se esse for o valor passado.
            printf("%d", atoi(av[1]) * atoi(av[3]));
    }
    printf("\n");
    return 0;   
}