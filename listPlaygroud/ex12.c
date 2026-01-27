/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex12.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:46:42 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/25 13:53:14 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
/*
Turn-in directory: ex12/
Files to turn in: ft_list_remove_if.c, ft_list.h
Allowed functions: free
• Create the function ft_list_remove_if which removes from the list all elements
whose data, when compared to data_ref using cmp, causes cmp to return 0.
• The data from an element to be erased should be freed using free_fct.
• Here’s how it should be prototyped:
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
• The functions pointed to by cmp and free_fct will be used as follows:
(*cmp)(list_ptr->data, data_ref);
(*free_fct)(list_ptr->data);*/


void free_fct(void *data)
{
    free(data);
}

int cmp(void *d1, void *d2)
{
    return *(int*)d1 - *(int*)d2;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *tmp, *prev, *curr;

    curr = *begin_list;
    tmp = NULL;
    prev = NULL;

    while(curr)
    {
        if(cmp(curr->data, data_ref) == 0)
        {
            tmp = curr->next; // guarda o caminho
            if(free_fct)
                free_fct(curr->data); // apaga data.
            free(curr); //apaga node;

            if(prev) // se ja estiveres alem do primeiro node,
                prev->next = tmp; // caso o meu prev for nullo ,muda o meu inicio.
            else 
                *begin_list = tmp;
            curr = tmp;
        }
        else
        {
            prev = curr; // caso n for , o meu node atual vai ser associado ao meu anterior.
            curr = curr->next; // next
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
   int *d = malloc(sizeof(int));
    
    if(!a|| !b || !c)
        return 1;
    *a = 9;
    *b = 10;
    *c = 8;
    *d = 10;
    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;

    ft_list_remove_if(&n1,d, cmp, free_fct);
    run_list(n1);
    return 0;
}