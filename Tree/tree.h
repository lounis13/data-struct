#ifndef _TREE_H_
#define _TREE_H_

typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
}*tree;

/**
 * 
 **/
tree tree_init();

/**
 * 
 **/
tree tree_create_node(int value);

/**
 * 
 **/
void tree_free(tree t);

/**
 * 
 **/
tree tree_left(tree t);

/**
 * 
 **/
tree tree_right(tree t);

/**
 * 
 **/
tree tree_new_lef(tree t, tree new_left);

/**
 * 
 **/
tree tree_new_right(tree t, tree new_right);

#endif