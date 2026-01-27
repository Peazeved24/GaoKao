/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex11.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:05:19 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/23 14:25:39 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

int ft_strlen(char *s1)
{
    int i;

    i = 0;
    while(s1[i])
    {
        i++;
    }
    return i;
}

int ft_strcmp(char *s1 , char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] && s2[j])
    {
        if(s1[i] != s2[j])
            return s1[i] - s2[j];
        i++;
        j++;
    }
    return 0;
}

char *str_dup(char *s1)
{
    int i = 0;
    int len = ft_strlen(s1);
    char *s2 = malloc((len + 1) * sizeof(char));
    if(!s2)
        return NULL;
    
    while(s1[i])
    {
        s2[i] = s1[i];
        i++;
    }   
    s2[i] = '\0';
    return s2;
}

int cmp(void *d1, void *d2)
{
    return ft_strcmp((char*)d1 ,(char*)d2);
}

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *node;

    node = begin_list;

    while(node)
    {   
        if(cmp(node->data, data_ref) == 0)
        {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

int main()
{
    t_list *n1 , *n2, *n3;
    char *a , *b;

    a = str_dup("ola");
    b = str_dup("ola");

    n1 = add_element(a);
    n2 = add_element(b);

    n1->next = n2;
    
    t_list *node = ft_list_find(n1,  b, cmp);
    printf("%s", (char*)node->data);
    return 0;   
}