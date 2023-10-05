#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree inorder
 *
 * @tree: Pointer to the tree
 * @func: function to apply on tree
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
