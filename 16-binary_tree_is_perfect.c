#include "binary_trees.h"

/**
 * find_a_depth - Returns depth of left most leaf.
 * @tree: pointer to the root node of the tree to check
 *
 * Return: Always
 */

int find_a_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * tree_is_perfect - tests if a binary tree is perfect or not
 * @tree: pointer to the root node of the tree to check
 * @depth: depth
 * @level: level
 *
 * Return: Always
 */

int tree_is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (tree_is_perfect(tree->left, depth, level + 1) &&
		tree_is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = find_a_depth(tree);

	return (tree_is_perfect(tree, depth, 0));
}

