/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listremoveif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:04:46 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 16:16:32 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}               t_list;


t_list *add_elem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

void ft_runlist(t_list *n)
{
    int f = 1;
    while(n)
    {
        if(!f)
            printf(" -> ");
        printf("%i", *(int*)n->data);
        n = n->next;
        f = 0;
    }
}

int cmp(void *d1, void *d2)
{
    return (*(int*)d1 - *(int*)d2);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0)// --- CABECA.  
    {
        t_list *tmp  = *begin_list;
        *begin_list = (*begin_list)->next;
        free(tmp->data);
        free(tmp);
    }

    t_list *prev = *begin_list; // uma anterior.
    t_list *cur = prev->next; // atual.


    while(cur) // 34 etc
    {
        if(cmp(cur->data ,data_ref) == 0)
        {
            prev->next = cur->next;
            free(cur->data);
            free(cur);
            cur = prev->next;    
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
        
    }
    // -- EU SO QUERER O MEIO.
}

int main()
{
    t_list *n1 , *n2 ,*n3, *n4;
    int *a , *b , *c, *d;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    d = malloc(sizeof(int));

    *a = 9;
    *b = 10;
    *c = 9;
    *d = 11;  
    
    int ref = 9;
    
    n1 = add_elem(a);
    n2 =  add_elem(b);
    n3 = add_elem(c);
    n4 = add_elem(d);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    
    ft_list_remove_if(&n1, &ref, cmp);
    ft_runlist(n1);
    return 0;
}