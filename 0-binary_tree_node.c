#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: The pointer to the parent node of the node to create
 * @value: The value to put in the new node
 * Return: A pointer to the new node, or NULL on failure
 * When created, a node does not have any child
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent == NULL)
	{
		parent = new;
	}
	else
	{
		new->parent = parent;
		if (new->n > parent->n)
		{
			parent->right = new;
		}
		else
		{
			parent->left = new;
		}
	}
	return (new);
}
