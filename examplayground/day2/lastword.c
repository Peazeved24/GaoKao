/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:27:07 by peazeved          #+#    #+#             */
/*   Updated: 2025/10/12 14:56:30 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *str = av[1];
        
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        while(str[i]) // tamso no fim
            i++;
        while(i > 0 && str[i-1] == ' ' || str[i-1] == '\t')
            i--;
        int end = i; //valor salvo
        while(i > 0 && str[i-1] != ' ' && str[i-1] != '\t') // for palavras
            i--; // inicio da minha ultima palavra.
        while(i < end)
             write(1, &str[i++], 1);
    }
    write(1, "\n", 1);
    return 0;
}