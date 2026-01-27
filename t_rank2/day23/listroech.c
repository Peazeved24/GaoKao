/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listroech.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:49:48 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/26 16:52:16 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void f(void *data)
{
    return *(int*)data = *(int*)data * 5;
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *n = begin_list;

    while(n)
    {
        if(f)
        {
            f(n->data);
        }
        n = n->next;
    }
}
