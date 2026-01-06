/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:15:40 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/30 16:21:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


void ft_runlist(t_list *begin)
{
    t_list *node = begin;
    int f = 1;
    
    while(node)
    {
        if(!f)
            printf(" -> ");
        printf("%i", *(int*)node->data);
        node = node->next;
        f = 0;
    }
    printf("\n");
}

t_list *add_elem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    
    while(begin_list)
    {
        i++;
        begin_list = begin_list->next;
    }
    return i;
}

int main(int ac, char **av)
{
    t_list *n1, *n2, *n3,  *n4;
    int *a , *b , *c, *d;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    d = malloc(sizeof(int));

    *a = 9;
    *b = 10;
    *c = 11;
    *d = 12;;

    n1 = add_elem(a);
    n2 = add_elem(b);
    n3 = add_elem(c);
    n4 = add_elem(d);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    int size = ft_list_size(n1);
    printf("%i\n", size);
    ft_runlist(n1);
    return 0;
}