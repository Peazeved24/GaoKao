/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex16.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:05:53 by peazeved          #+#    #+#             */
/*   Updated: 2025/09/03 03:47:09 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create the function ft_sorted_list_insert which creates a new element and
inserts it into a list sorted so that it remains sorted in ascending order.
• Here’s how it should be prototyped:
void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)());
• Function pointed by cmp will be used as follows:
(*cmp)(list_ptr->data, list_other_ptr->data);*/



#include "struct.h"


typedef struct s_list  
{
    struct s_list *next; // o ptr para o proximo node
    void *data; // minha var que recebe valores. ptr generico -
} t_list;

int ft_isNum(char *n)
{
    int i = 0;
    if(!n)
        return 0;
    if(n[0] == '-' || n[0] == '+')
        i++;
    while(n[i])
    {
        if(n[i] >= '0' && n[i] <= '9')
            return 1;
        i++;
    }   
    return 0;
}

void run_list(t_list *head)
{
    t_list *node = head;

    while(node)
    {
            printf("%i", *(int*)node->data);
            if(node->next)
            printf(" -> ");
        node = node->next;
    }
}

void free_list(t_list **list)
{
    t_list *node = *list;
    
    while(node)
    {
        t_list *tmp = node->next;
        free(node->data);
        free(node);
        write(1, "#", 1);
        node = tmp;
    }

    *list = NULL;
}

int cmp(void *d1, void *d2)
{
    return *(int*)d1 - *(int*)d2; 
}


t_list *add_elem(void *data, size_t size)
{
     size_t i = 0;
    t_list *node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = malloc(size);
    if(!node->data)
        return NULL;
    while(i < size)
    {
        ((char*)node->data)[i] = ((char*)data)[i];
        i++;
    }
    node->next = NULL;
    return node;
}


int ft_atoi(char *str)
{
    int s = 1;
    int n = 0;

    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
            s = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return n * s;
}

void ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
    t_list *new = add_elem(data, sizeof(int));
    t_list *node = *begin_list;
    
    if(!*begin_list || cmp (data, node->data) < 0) // o meu primeiro numero e inferior
    {
        new->next = *begin_list;
        *begin_list =  new;
        return;   
    }
    while(node->next && cmp(data, node->next->data) >= 0)
    {
        node = node->next;
    }
    
    new->next = node->next;
    node->next = new;
}

int main(int ac, char **av)
{
    if(ac < 2)
        return 1;   
    
    int i = 1; 
    int *d = malloc(sizeof(int));

    *d = 10;
    
    t_list *list = NULL;
    while(i < ac)
    {
        if(!ft_isNum(av[i]))
        {
            printf("POE NUMEROS CRLHS!");
            return 1;
        }
        int val = ft_atoi(av[i]);
        ft_sorted_list_insert(&list, &val, cmp);
        i++;    
    }
    run_list(list);
    printf("\n");
    free_list(&list);
    return 0;
}