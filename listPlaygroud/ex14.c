/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex14.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:01:52 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/25 14:51:30 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int cmp(void *d1, void *d2)
{
    return *(int*)d1 - *(int*)d2;
}

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
    t_list *curr, *tmp;
    curr = *begin_list;
    tmp = NULL;

    int swap = 1;
    while(swap)
    {
        swap = 0;
        curr = *begin_list;
        while(curr->next)
        {
            if(cmp(curr->data, curr->next->data) > 0)
            {
                tmp = curr->data;
                curr->data = curr->next->data;
                 curr->next->data = tmp;
                swap = 1;
            }
            curr = curr->next;
        }
    }
}

int main()
{
    t_list *n1, *n2, *n3;
    int *a, *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));

    if(!a|| !b || !c)
        return 1;

    *a = 3;
    *b = 2;
    *c = 1;
    
    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;

    ft_list_sort(&n1, cmp);
    run_list(n1);
    return 0;
}