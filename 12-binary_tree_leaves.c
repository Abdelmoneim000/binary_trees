#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves inside of a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 * Return: The number of leaves inside of the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves += 1;
			leaves += binary_tree_leaves(tree->left);
			leaves += binary_tree_leaves(tree->right);
		}
		else
		{
			leaves += binary_tree_leaves(tree->left);
			leaves += binary_tree_leaves(tree->right);
		}

	}

	return (leaves);
}
