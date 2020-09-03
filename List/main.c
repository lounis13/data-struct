#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define GREEN "\033[1;32m"
#define CLEAR "\033[0m"

/** for test */
int main(int argc, char const *argv[])
{
    printf("%s # TEST ADD AT START - FONCTION : %s\n",GREEN, CLEAR);
    list l1 = list_init();
    l1 = list_add_start(l1,1); l1 = list_add_start(l1,2);
    l1 = list_add_start(l1,3); l1 = list_add_start(l1,4);
    list_print(l1);

    printf("%s # TEST ADD AT END   - FONCTION : %s\n",GREEN, CLEAR);
    list l2 = list_init();
    l2 = list_add_end(l2,1); l2 = list_add_end(l2,2);
    l2 = list_add_end(l2,3); l2 = list_add_end(l2,4);
    list_print(l2);


    /*free lists */
    list_free(l1);
    list_free(l2);
    return 0;
}
