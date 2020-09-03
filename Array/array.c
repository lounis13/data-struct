
#include "array.h"

#include <stdio.h>
#include <stdlib.h>

array array_init(int max_size)
{
    return (array) {0, malloc(sizeof(int)*max_size), max_size};
}

void array_free(array a)
{
    a.max_size = 0 ;
    a.size     = 0 ;
    free(a.array);    
}

void array_print(array a)
{
    printf("SIZE : %d \n\t > ", a.size);
    for (int i = 0; i < a.size; i++)
        printf("%d ", a.array[i]);
    puts("");
}

array array_add_end(array a, int value)
{

    a.array[a.size++] = value ; 
    return a;
}