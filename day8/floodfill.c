    /* ************************************************************************** */
    /*                                                                            */
    /*                                                        :::      ::::::::   */
    /*   floodfill.c                                        :+:      :+:    :+:   */
    /*                                                    +:+ +:+         +:+     */
    /*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
    /*                                                +#+#+#+#+#+   +#+           */
    /*   Created: 2025/12/29 14:26:34 by peazeved          #+#    #+#             */
    /*   Updated: 2025/12/29 15:09:21 by peazeved         ###   ########.fr       */
    /*                                                                            */
    /* ************************************************************************** */

    #include "struct.h"

   void ft_ff(char **tab, t_point size, t_point cur, char target)
{
    // limites
    if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y)
        return;
    // só preenche se for target
    if (tab[cur.y][cur.x] != target)
        return;
    // marca como preenchido 
    tab[cur.y][cur.x] = 'F';
    // vizinhos
    ft_ff(tab, size, (t_point){cur.x - 1, cur.y}, target);
    ft_ff(tab, size, (t_point){cur.x + 1, cur.y}, target);
    ft_ff(tab, size, (t_point){cur.x, cur.y - 1}, target);
    ft_ff(tab, size, (t_point){cur.x, cur.y + 1}, target);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    char target = tab[begin.y][begin.x]; // valor pretendido.!!! (0 ou 1).
    ft_ff(tab, size, begin, target);
}

char** make_area(char** zone, t_point size)
{
        char** new;

        new = malloc(sizeof(char*) * size.y);
        for (int i = 0; i < size.y; ++i)
        {
            new[i] = malloc(size.x + 1);
            for (int j = 0; j < size.x; ++j)
                new[i][j] = zone[i][j];
            new[i][size.x] = '\0';
        }

        return new;
}

int main(void)
    {
        t_point size = {8, 5};
        char *zone[] = {
            "11111111",
            "10001001",
            "10010001",
            "10110001",
            "11100001",
        };

        char**  area = make_area(zone, size);
        for (int i = 0; i < size.y; ++i)
            printf("%s\n", area[i]);
        printf("\n");

        t_point begin = {2, 2};
        flood_fill(area, size, begin);
        for (int i = 0; i < size.y; ++i)
            printf("%s\n", area[i]);
        return (0);
    }

    /*

        flood fill:
            - primeiro  de tudo ! -- entender o target !!!
                - apos entender o target, comecar a associar o meu begin como current.
            - pq entender o curret faz falta?
                - current e a minha posicao inicial, onde tudo comeca;
            serve tanto para associar ao target(valores que serao modificados) quanto para condicoes
            de seguranca -- se esta abaixo de 0 ou se passa do size. 
        
        verifica limites
        verifica se é target
        marca
        chama vizinhos
                            
    */