#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node to find the uncle
 *
 * Return: NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	node = node->parent;

	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);

	return (NULL);
}

