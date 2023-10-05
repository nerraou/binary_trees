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
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height + 1);
		return (right_height + 1);
	}
}