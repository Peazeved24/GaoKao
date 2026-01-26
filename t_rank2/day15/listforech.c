/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listforech.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 20:01:27 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:11:55 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


void ft_runelem(t_list *n1)
{
    int  f = 1;
    while(n1)
    {
        if(!f)
            printf("->");
        printf("%i", *(int*)n1->data);
        n1 = n1->next;
        f= 0;
    }
}

t_list *ft_add(void *data)
{
    t_list *n = malloc(sizeof(t_list));
    if(!n)
        return NULL;
    n->data = data;
    n->next = NULL;

    return n;
}

void f(void *data)
{
    *(int*)data = *(int*)data * 5;
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *n = begin_list;
    while(n)
    {
        if(f)
            f(n->data);
        n = n->next;
    }
}

int main()
{
    t_list *n1, *n2;
    int *a , *b;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));

    *a = 10;
    *b = 11;
    
    n1 = ft_add(a);
    n2 = ft_add(b);
    
    n1->next =n2;

    ft_list_foreach(n1, f);
    ft_runelem(n1);
    printf("\n");
    return 0;
}