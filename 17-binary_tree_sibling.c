#include "binary_trees.h"

/**
*binary_tree_sibling -  function that finds the sibling of a node
*@node: pointer to the node to find the sibling
*
*Return: tree
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
