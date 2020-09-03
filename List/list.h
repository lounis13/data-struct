#ifndef _LIST_H_
#define _LIST_H_

/*ERRORS*/
#define ALLOC_ERROR puts("Allocation Error !"),exit(0)

/**
 *  list of int 
 */
typedef struct element
{   /*the value*/
    int value;
    /*pointer to the next element */
    struct element *next;
}*list;

/**
 * init the list 
 * @return  null
 */
list list_init();

/**
 *      add at the strat of the list
 * @param  l         list of int 
 * @param  value     value to add
 * @return list      list after adding the value
 */
list list_add_start(list l, int value);

/**
 *      add at the position of the list
 * @param  l         list of int 
 * @param  pos       position
 * @param  value     value to add
 * @return list      list after adding the value
 */
list list_add_position(list l, int pos, int value);

/**
 *      add at the end of the list
 * @param  l         list of int 
 * @param  value     value to add
 * @return list      list after adding the value
 */
list list_add_end(list l, int value);

/**
 *      print the list 
 * @param  l        list of int      
 */
void list_print(list l );


/**
 *  free the list
 */
void list_free(list l);

#endif