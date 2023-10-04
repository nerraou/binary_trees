#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left
 *
 * @parent: Pointer to the node to parent
 * @value: node value
 *
 * Return: NULL or the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *left;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->right = NULL;
	if (parent->left != NULL)
	{
		left = parent->left;
		parent->left = node;
		left->parent = node;
		node->left = left;
	}
	else
		parent->left = node;
	node->parent = parent;
	return (node);
}
