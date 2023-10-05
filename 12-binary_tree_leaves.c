#include "binary_trees.h"

/**
 * binary_tree_leaves - count a leaves
 *
 * @tree: Pointer to the tree
 *
 * Return: the leaves number
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
			leaves += 1;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		return (leaves);
	}
}
