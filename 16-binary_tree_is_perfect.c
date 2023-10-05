#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if leaf
 *
 * @node: Pointer to the tree to node
 *
 *Return: 0 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

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
		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height);
		return (right_height);
	}
}

/**
 * is_perfect_recursive - is perfect recursive
 *
 * @node: Pointer to the tree
 * @height: Tree height including root
 * @current_height: current height start at 0
 *
 * Return: 1: perfect, 0: not perfect
 */

int is_perfect_recursive(const binary_tree_t *node, int height,
						 int current_height)
{
	if (node == NULL)
		return (1);
	if (binary_tree_is_leaf(node))
	{
		if (height == current_height + 1)
			return (1);
		return (0);
	}

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (is_perfect_recursive(node->left, height, current_height + 1) &&
			is_perfect_recursive(node->right, height, current_height + 1));
}

/**
 * binary_tree_is_perfect - binary tree is perfect
 *
 * @tree: Pointer to the tree to node
 *
 *Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	return (is_perfect_recursive(tree, height + 1, 0));
}
