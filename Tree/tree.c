#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

tree tree_init()
{
    return NULL;
}

tree tree_create_node(int value)
{
    return (tree) {value, NULL, NULL};
}

void tree_free(tree t)
{
    t->left  = NULL;
    t->right = NULL;
    free(t); 
    t = NULL;
}

tree tree_left(tree t)
{
    return t->left;
}

tree tree_right(tree t)
{
    return t->right;
}

tree tree_new_lef(tree t,tree new_left)
{
    t->left = new_left;
    return t;
}

tree tree_new_right(tree t, tree new_right)
{
    t->right = new_right;
    return t;
}
