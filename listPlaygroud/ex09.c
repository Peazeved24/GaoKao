/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:54:40 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/07 15:02:22 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


void f(void *data)
{
    (*(int*)data) *= *(int*)data;
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *node;

    node = begin_list;
    while(node)
    {
        if(f)
        {
            f(node->data);
        }
        node = node->next;
    }
}

int main()
{
    t_list *n1 , *n2, *n3;
    int *a , *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    
    *a = 1;
    *b = 2;
    *c = 3;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;
    
    ft_list_foreach(n1, f);
    run_list(n1);
    return 0;
}