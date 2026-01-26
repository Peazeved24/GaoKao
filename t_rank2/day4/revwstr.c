/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revwstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 15:26:15 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/24 16:18:14 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

void ft_wstr(char *str)
{
    int i = ft_strlen(str) - 1;

    while(i >= 0)
    {
        while(i >= 0 && ft_space(str[i]))
            i--; // ignora espaços no fim

        int end = i;

        while(i >= 0 && !ft_space(str[i]))
            i--; // encontra início da palavra

        int start = i + 1;

        // imprime palavra
        while(start <= end)
            write(1, &str[start++], 1);

        // espaço entre palavras
        if(i >= 0)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        ft_wstr(str);
    }
    return 0;
}