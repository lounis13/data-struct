#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct str_arr
{
    int size;
    int *array;
    int max_size;
}array;

/**
 * 
 */
array array_init(int max_size);

/**
 * 
 */
void array_free(array);

/**
 * 
 */
void array_print(array a);

/**
 * 

 */
array array_add_end(array a, int value);
#endif