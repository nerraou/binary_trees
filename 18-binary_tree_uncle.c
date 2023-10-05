#include "binary_trees.h"

/**
 * binary_tree_sibling - return sibling
 *
 * @node: Pointer to the tree
 *
 * Return: the nodes sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	else
	{
		if (node->parent->right == node)
			return (node->parent->left);
		return (node->parent->right);
	}
}

/**
 * binary_tree_uncle - binary tree uncle
 *
 * @node: Pointer to the node
 *
 * Return: 1: uncle, 0: not uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
