/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex15.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:33:10 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/26 16:05:38 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create the function ft_list_reverse_fun which reverses the order of the elements
in the list.
• Here’s how it should be prototyped:
void ft_list_reverse_fun(t_list *begin_list);*/

#include "struct.h"

int ft_cl(t_list *begin)
{
    int i = 0;

    while(begin)
    {
        begin = begin->next;
        i++;
    }
    return i;
}

void ft_list_reverse_fun(t_list **begin_list)
{
  int count = ft_cl(*begin_list);
  t_list *n1, *n2;
  int i = 0;
  int j = count - 1;
  int k = 0; // ajuda me 

  n1 = *begin_list;
  n2 = *begin_list;
  while(i < j)
  {
        while(k++ < i) // i == primeira possicao ! (1 data)
            n1 = n1->next;
    k = 0;
        while(k++ < j)
            n2 = n2->next; // j- meu "ultimo"
    
    void *tmp = n1->data;
    n1->data = n2->data;
    n2->data = tmp;
    i++;
    j--;
  }
}

int main()
{
    t_list *n1, *n2, *n3;
    int *a, *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));

    *a = 1;
    *b = 7;
    *c = 6;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;

    ft_list_reverse_fun(&n1);
    run_list(n1);
    return 0;
} 