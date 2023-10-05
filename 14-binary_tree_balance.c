#include "binary_trees.h"

/**
 * binary_tree_height - count a node height
 *
 * @tree: Pointer to the tree
 *
 * Return: the node height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_height = 1 + binary_tree_height(tree->left);
		right_height = 1 + binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height);
		return (right_height);
	}
}

/**
 * binary_tree_balance - count balance
 *
 * @tree: Pointer to the tree
 *
 * Return: the nodes number
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int left_hright = 0;
	int right_hright = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_hright = binary_tree_height(tree->left);
		right_hright = binary_tree_height(tree->right);
	}
	return (left_hright - right_hright);
}
