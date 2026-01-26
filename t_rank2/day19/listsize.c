/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 15:02:57 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/15 15:09:40 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void ft_runlist(t_list *n)
{
    int f = 1;
    
    while(n)
    {
        if(!f)
            printf("->");
        printf("%i", *(int*)n->data);
        n= n->next;
        f = 0;
    }
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
    if(!begin_list || !begin_list->next)
        return 0;

    while(begin_list)
    {
        i++;
        begin_list = begin_list->next;
    }
    return i;
}

int main()
{
    t_list *n1, *n2, *n3;
    int *a, *b, *c;
    
    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    
    *a = 9 ;
    *b = 10;
    *c = 19;
    
    n1 = add_elem(a);
    n2 = add_elem(b);
    n3 = add_elem(c);

    n1->next =n2;
    n2->next =n3;
    ft_runlist(n1);
    printf("\n");
    printf("%i", ft_list_size(n1));
    return 0;
}