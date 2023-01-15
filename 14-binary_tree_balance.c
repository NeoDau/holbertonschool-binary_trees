#include "binary_trees.h"

int height(struct node* node);

/**
 *
 *
 *
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = height(tree->left);
	int right_height = height(tree->right);

	if (abs(left_height - right_height) <= 1 && binary_tree_balance(tree->left)
		&& binary_tree_balance(tree->right))
		return (1);

	return (0);
}

