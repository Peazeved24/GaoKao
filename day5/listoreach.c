/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listoreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:17:32 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 18:26:12 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"


t_list *ft_addelem(void *data)
{
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}
void ft_runlist(t_list *begin)
{
    int f = 1;
    
    while(begin)
    {
        if(!f)
            printf("->");
        printf("%i", *(int*)begin->data);
        begin = begin->next;
        f = 0;
    }
}

void f(void *data)
{
    *(int*)data = *(int*)data * 5;
}
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *node = begin_list;

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
    t_list *n1, *n2, *n3 , *n4;
    int *a, *b, *c, *d;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    d = malloc(sizeof(int));
    
    *a = 3;
    *b = 4;
    *c = 5;
    *d = 6;
    
    n1 = ft_addelem(a);
    n2 = ft_addelem(b);
    n3 = ft_addelem(c);
    n4 = ft_addelem(d);


    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    ft_list_foreach(n1,f);
    ft_runlist(n1);
}