#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: tree
 *Return: a
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	a = binary_tree_depth(tree->parent);
	return (a + 1);
}
