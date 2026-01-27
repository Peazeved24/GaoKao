/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:59:27 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/23 14:25:58 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int cmp(void *d1 , void *d2) // meu filtro da foreach
{
    if(d1 != d2)
        return 1;
    return 0;
}

void f(void *data)
{
    (*(int*)data) *= 5;
}


void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
    t_list *node;

    node = begin_list;
    while(node)
    {
        if(cmp(node->data , data_ref) == 0)
        {
            if(f)
                f(node->data);
        }
        node = node->next;
    }
}

int main()
{
    t_list *n1 , *n2 , *n3;
    int *a, *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    
    if(!a || !b || !c)
        return 1;
    *a = 1;
    *b = 2;
    *c = 9;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;

    ft_list_foreach_if(n1, f, a,cmp);
    run_list(n1);
    return 0;
}   