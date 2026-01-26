/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 13:51:11 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/28 14:00:48 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

t_list *add_elem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;

    return node;
}

void ft_runlist(t_list *node)
{
    int f = 1;
    
    while(node)
    {
        if(!f)
            printf(" -> ");
        
        printf("%i", *(int*)node->data);
        node = node->next;
        f = 0;
    }
}

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *node = begin_list;

    while(node)
    {
        node = node->next;
        i++;
    }
    return i;
}
int main()
{
    t_list *n1, *n2, *n3, *n4, *n5;
    int *a , *b , *c, *d, *e;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    d = malloc(sizeof(int));
    e = malloc(sizeof(int));

    *a = 9;
    *b = 9;
    *c = 9;
    *d = 9;
    *e = 9;
    
    n1 = add_elem(a);
    n2 = add_elem(b);
    n3 = add_elem(c);
    n4 = add_elem(d);
    n5 = add_elem(e);
        
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    
    ft_runlist(n1);
    printf("\n");
    int result = ft_list_size(n1);
    printf("%i\n", result);
    return 0;
}