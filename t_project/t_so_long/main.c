/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 18:22:21 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/31 18:52:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s.h"

int main(int ac, char **av)
{
    if(ac == 1)
    {
        printf("error\n");
        return 0;
    }
    t_map map; // inicializacao da var -> struct.
    if(ft_fdpars(av[1], &map) || ft_alocmap(&map)|| ft_fillmap(&map, av[1]))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    if(ft_grid_parse(&map))
    {
        printf("Error\n");
        ft_freemap(&map);
        return 0;
    }
    else
        ft_printmap(&map);
    ft_freemap(&map);
    return 0;
}
