#include "binary_trees.h"

/**
*binary_tree_height -  function that measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure the height
*
*Return: heigth of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t j = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		(i = 1 + binary_tree_height(tree->left));
	if (tree->right)
		(j = 1 + binary_tree_height(tree->right));
	if (i >= j)
		return (i);
	else
		return (j);
}


/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree:  pointer to the root node of the tree to measure the balance factor
*
*Return: 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
