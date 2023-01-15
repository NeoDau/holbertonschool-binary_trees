#include "binary_trees.h"
#include <sys/param.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: Always
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_side = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		size_t right_side = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return (MAX(left_side, right_side));
	}
}

