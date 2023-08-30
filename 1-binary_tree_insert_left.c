#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 * of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs - NULL.
 * OR a pointer to the new node.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}


	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
	{
		return (NULL);
	}

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;
	newNode->parent = parent;

	return (newNode);

}
