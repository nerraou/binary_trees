#include "binary_trees.h"

/**
 * binary_tree_postorder - binary tree postorder
 *
 * @tree: Pointer to the tree
 * @func: function to apply on tree
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
