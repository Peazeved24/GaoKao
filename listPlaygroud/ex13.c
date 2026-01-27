/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex13.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:53:37 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/25 14:00:18 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

/*
Turn-in directory: ex13/
Files to turn in: ft_list_merge.c, ft_list.h
Allowed functions: None
• Create the function ft_list_merge which places elements of a list begin2 at the
end of another list begin1.
• Element creation is not authorised.
• Here’s how it should be prototyped:
void ft_list_merge(t_list **begin_list1, t_list *begin_list2);*/

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
    t_list *n1, *n2;

    n1 = *begin_list1;
    n2 = begin_list2;

    if(!n1)
    {
        n1 = n2;
        return;
    }
    
    while(n1->next)
    {
        n1 = n1->next;
    }
    n1->next = n2;
}

int main()
{
    t_list *n1 , *n2 , *n3;
    t_list *m1 , *m2;
    int *a, *b, *c;
    int *d, *e;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));

    d = malloc(sizeof(int));
    e = malloc(sizeof(int));
    
    
    if(!a || !b || !c || !d || !e)
        return 1;
    *a = 1;
    *b = 2;
    *c = 3;

    *d = 4;
    *e = 5;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    m1 = add_element(d);
    m2 = add_element(e);
    
    n1->next = n2;
    n2->next = n3;

    m1->next = m2;
    
    ft_list_merge(&n1, m1);
    run_list(n1);
    return 0;
}