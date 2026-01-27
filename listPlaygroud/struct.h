#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct s_list  
{
    struct s_list *next; // o ptr para o proximo node
    void *data; // minha var que recebe valores. ptr generico -
} t_list;


void *run_list(t_list *being_list)
{
    t_list *t;

    t = being_list;

    while(t)
    {
        printf("%d,", *(int*)t->data);
        t = t->next;
    }
}

t_list *add_element(void * data)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->data = data;
    node->next = NULL;

    return node;
}

#endif

/*

int main()
{
    t_list *n1 , *n2 , *n3;
    int *a, *b, *c;

    a = malloc(sizeof(int));
    b = malloc(sizeof(int));
    c = malloc(sizeof(int));
    
    if(!a || !b || !c)
        return 1;
    *a = 1;
    *b = 2;
    *c = 9;

    n1 = add_element(a);
    n2 = add_element(b);
    n3 = add_element(c);

    n1->next = n2;
    n2->next = n3;

    run_list(n1);
    
    return 0;
}*/



