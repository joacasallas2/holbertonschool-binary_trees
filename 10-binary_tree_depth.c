#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: The pointer to the node to measure the depth
 * Return: the depth of the given node
 * If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t i = 0;

	if (tree == NULL)
		return (0);
	if (temp)
	{
		while (temp->parent)
		{
			temp = temp->parent;
			i++;
		}
	}
	return (i);
}
