#include "binary_trees.h"
/**
 *binary_tree_insert_right - function that inserts a node as the right
 *@parent: pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->right = parent->right;
	parent->right = newNode;
	if (newNode->right)
	{
		newNode->right->parent = newNode;
	}
	return (newNode);
}
