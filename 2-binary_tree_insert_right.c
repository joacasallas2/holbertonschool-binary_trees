#include "binary_trees.h"
/**
 * binary_tree_insert_right -  function that inserts a node as the right-child
 * of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	if (parent->right != NULL)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}
	new->parent = parent;
	parent->right = new;
	return (new);
}
