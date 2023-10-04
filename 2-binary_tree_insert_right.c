#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right
 *
 * @parent: Pointer to the node to parent
 * @value: node value
 *
 * Return: NULL or the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *right;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	if (parent->right != NULL)
	{
		right = parent->right;
		parent->right = node;
		right->parent = node;
		node->right = right;
	}
	else
	{
		parent->right = node;
		node->right = NULL;
	}
	node->parent = parent;
	return (node);
}
