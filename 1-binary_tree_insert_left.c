#include "binary_trees.h"


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = NULL;

    newNode = malloc(sizeof(binary_tree_t) + 1);

    if (parent == NULL)
    {
        return (NULL);
    }
    else if(newNode == NULL)
    {
        return (NULL);
    }

    newNode->n = value;
    newNode->right = NULL;

    if(parent->left)
    {
        newNode->left = parent->left;
    }

    parent->left = newNode;

    return (newNode);

}