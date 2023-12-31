#include "binary_trees.h"
/**
 * binary_tree_height - calculates the height of a tree.
 * @tree: pointer to the parent node
 * Return: 0 if tree is NULL, or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left_height = 0, right_height = 0;

		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((left_height > right_height) ? left_height : right_height);
	}

	return (0);
}
