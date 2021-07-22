#include "binary_trees.h"

/**
*binary_tree_depth - measures the depth of a node in a binary tree
*@tree: pointer to the node to measures the depth
*
*Return: size t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;
	size_t j;

	if (tree == NULL)
		return (0);

	for (i = 0; tree->parent != NULL; i++)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
