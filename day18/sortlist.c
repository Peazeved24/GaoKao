/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortlist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:19:13 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/14 11:34:36 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct  s_list
{
	int data; // minha data e inteira desta vez !! amen.
	struct s_list *next;
}t_list;


void ft_runelem(t_list *node)
{
	int f = 1;
	while(node)
	{
		if(!f)
			printf("->");
		printf("%i", node->data);
		node = node->next;
		f = 0;
	}
}

t_list *add_elem(int data)
{
	t_list *node = malloc(sizeof(t_list));
	if(!node)
		return NULL;
	node->data = data;
	node->next = NULL;

	return node;
}

int cmp(int a, int b)
{
	return (a <= b);
}

void ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int f = 1;
	
	if(!lst ||!lst->next)
		return lst;
	while(f)
	{
		f = 0;
		t_list *node = lst; // 
		while(node && node->next)
		{
			if(cmp(node->data, node->next->data) == 0)
			{
				ft_swap(&node->data, &node->next->data);
				f = 1;
			}
			node=node->next;
		}
	}
	return lst;
}

int main()
{
	t_list *n1 , *n2, *n3, *n4;
	int a, b, c, d;

	a = 9;
	b = 1;
	c = 2;
	d = 8;
	
	n1 = add_elem(a);
	n2 = add_elem(b);
	n3 = add_elem(c);
	n4 = add_elem(d);

	sort_list(n1, cmp);
	ft_runelem(n1);
	return 0;
}