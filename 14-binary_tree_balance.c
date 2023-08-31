#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor oftree.
 * @tree: A pointer to the root node of the tree..
 * Return: If tree is NULL, return 0, Otherwise return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree != NULL)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
/**
 * binary_tree_height - calculates the height of a tree.
 * @tree: pointer to the parent node
 * Return: 0 if tree is NULL, or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}

	return (0);
}

