#include <stdio.h>
#include <stdlib.h>

#include "list.h"

list list_init()
{
    return NULL;
}

list list_add_start(list l, int value)
{
    list new = malloc (sizeof(struct element ));
    if (new == NULL)
        ALLOC_ERROR;
    new->value = value;
    new->next = l ;
    return new ;
}

list list_add_position(list l, int pos, int value)
{
    list tmp = l ;
    while (tmp->next && pos-- > 0)
        tmp = tmp->next ;
    if(pos == -1)
        return list_add_start(l, value);
    else if (pos == 0)
    {
        list new = malloc (sizeof(struct element ));
        if (new == NULL)
            ALLOC_ERROR;
        new->value = value;
        new->next = tmp->next;
        tmp->next = new;
    }
    else
        puts("Position don't exist !");
    return l ;
}

list list_add_end(list l, int value)
{
    if(l == NULL)
        return list_add_start(l, value);
    list new = malloc (sizeof(struct element ));
    if (new == NULL)
        ALLOC_ERROR;
    new->value = value;
    new->next  = NULL ;
    list tmp = l ;
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = new;
    return l ;
}

void list_print(list l )
{
    while (l)
    {
        printf("%d -> ", l->value);
        l=l->next;
    }
    puts("Null");
}

void list_free(list l)
{
    while(l)
    {
        list tmp = l ; 
        l = l->next;
        free(tmp);
    }
}