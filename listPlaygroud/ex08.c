/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:56:48 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/06 13:55:16 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void ft_list_reverse(t_list **begin_list)
{
    t_list *node, *p , *temp;

    p = NULL;
    temp = NULL;

    node = *begin_list; // A

    while(node)
    {
        p = node->next; // P = A->NEXT(B)
        node->next = temp; // A->NEXT == NULL; (FIM)

        temp = node; // NULL = A;
        node = p; //A = A->NEXT(NULL);
    }
    *begin_list = temp;
}

int main()
{

    t_list *n1, *n2, *n3;

    int *a, *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    if(!a || !b || !c)
        return 1;

    *a = 9;
    *b = 2;
    *c = 98;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c); // c | next->null;
    n1->next = n2;
    n2->next = n3;

    t_list *t = n1;
    ft_list_reverse(&t);
    run_list(t);
    return 0;
}