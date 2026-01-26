/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:49:06 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/04 14:33:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int cmp(void *d1, void *d2) // cmp done!
{
    return (*(int*)d1 - *(int*)d2);
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
void ft_run(t_list *n)
{
    t_list *node = n;
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

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    while(*begin_list && cmp((*begin_list)->data, data_ref) == 0) // vi percorrer a minha lista ate ao fim.
    {
        t_list *temp = *begin_list;
        *begin_list = temp->next;
        free(temp->data);
        free(temp);
    }


    // a ideia e comecar a usar os proximos  e anteriores.
    t_list *cur;
    t_list *prev;
    prev = *begin_list; // o meu "inicio."
    if(!prev)
        return;
    cur = prev->next; // o proximo.
    while(cur)
    {
        if(cmp(cur->data, data_ref) == 0)
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
}

int main()
{
    t_list *n1,*n2,*n3, *n4;
    int *a, *b, *c, *d;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    d = malloc(sizeof(int));

    *a = 9;
    *b = 10;
    *c = 9;
    *d = 11;
    int ref= 9;
    n1 = add_elem(a);
    n2 = add_elem(b);
    n3 = add_elem(c);
    n4 = add_elem(d);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    ft_list_remove_if(&n1, &ref, cmp);
    ft_run(n1);
    return 0;
}

/*
os meus maiores erros :
            - PRIMEIRO:
                - n saber como remover bem a cabeca:
                    - aprendia a regra que C -C . R - R;
            - mal uso do cmp ( usar sempre == 0);
            - lembrar que a ref tem de ser dif do valores int que estou a usar (ref != a).


“Enquanto a cabeça tiver o valor que quero remover, avanço a cabeça.
Depois percorro a lista, e sempre que encontro um nó a remover,
ligo o anterior ao próximo.”

*/