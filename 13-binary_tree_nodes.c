#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the leaves in a binary tree
 * @tree: pointer to the node to check
 * Return: 0 or size of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->right));
	}
	else if (tree->left != NULL && tree->right == NULL)
	{
		return (1 + binary_tree_nodes(tree->left));
	}
	else if (tree->left != NULL && tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
	else
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}
}
