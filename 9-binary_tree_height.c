#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int left_side;
		int right_side;

		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);

		if (left_side > right_side)
			return (left_side + 1);
		else
			return (right_side + 1);
	}
}

