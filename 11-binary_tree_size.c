#include "binary_trees.h"
/**
 * binary_tree_size - a function to measure the size of the binary tree.
 * @tree: A pointer to the root of the binary tree.
 * Return: The size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree != NULL)
	{
		s += 1;
		s += binary_tree_size(tree->left);
		s += binary_tree_size(tree->right);
	}

	return (s);
}
