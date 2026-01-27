/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastwrod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:15:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/25 15:23:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];

        
        while(str[i]) //estamos no fim.
            i++;
        while(i > 0 && (str[i-1] == ' ' || str[i-1] == '\t')) // meu ultimo valor for espacos
            i--;
        while(i > 0 && str[i-1] != ' ' && str[i-1] != '\t')
            i--; // para no inicio da minha ultima palavra.
        while(str[i] && str[i] != ' ' && str[i] != '\t')
            write(1, &str[i++], 1);
            
    }
    write(1, "\n", 1);
    return 0;
}