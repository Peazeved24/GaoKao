/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1st.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:08:39 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/29 16:18:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        char *s = av[1];
        

        while(ft_space(s[i]))
            i++;
        int start = i;
        while(!ft_space(s[i]))
            i++;
        int end = i--;
        while(start < end)
            write(1, &s[start++], 1);
    }
    write(1, "\n", 1);
    return 0;
}