#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the node where we start to measure the depth
 * Return: 0 if tree = NULL, Otherwise number of nodes to the root.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if(tree != NULL && tree->parent != NULL)
		return (binary_tree_depth(tree->parent) + 1);
	
	return (0);
}
