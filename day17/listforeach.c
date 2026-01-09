/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listforeach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:06:19 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/09 17:15:49 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void f(void *data)// type cast it.
{
	*(int*)data = *(int*)data * 5;
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

t_list *add_elem(void *data)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return NULL;
	node->data = data;
	node->next = NULL;

	return node;
}

void ft_runelem(t_list *node)
{
	int f = 1;
	
	while(node)
	{
		if(!f)
			printf("->");
		printf("%i", *(int*)node->data);
		node = node->next;
		f = 0;
	}
	printf("\n");
}
int main()
{
	t_list *n1, *n2,*n3;
	int *a , *b , *c;

	a = malloc(sizeof(int));
	b = malloc(sizeof(int));
	c = malloc(sizeof(int));

	*a = 9;
	*b = 10;
	*c = 6;
	
	n1 = add_elem(a);
	n2 = add_elem(b);
	n3 = add_elem(c);
	
	n1->next = n2;
	n2->next = n3;
	ft_list_foreach(n1, f);
	ft_runelem(n1);
	return 0;
}