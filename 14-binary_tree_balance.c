#include "binary_trees.h"

/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree:  pointer to the root node of the tree to measure the balance factor
*
*Return: 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		(i = 1 + binary_tree_balance(tree->left));
	if (tree->right)
		(j = 1 + binary_tree_balance(tree->right));

	r = i - j;
		return (r);
}
