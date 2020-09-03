#include <stdio.h>
#include <stdlib.h>

#include "array.h"

int main(int argc, char const *argv[])
{
    array a = array_init(10);
    a = array_add_end(a, 10);
    a = array_add_end(a, 15);
    array_print(a);
    array_free(a);
    return 0;
}
