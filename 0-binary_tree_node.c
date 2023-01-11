#include "binary_trees.h"
/**
 *binary_tree_node - create a binary tree node
 *@parent: pointer to the parent node
 *@value: value
 *Return: pointer new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (parent != NULL)
	{
		newNode->parent = parent;
	}
	else
	{
		newNode->parent = NULL;
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
