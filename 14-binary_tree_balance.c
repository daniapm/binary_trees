#include "binary_trees.h"

/**
*binary_tree_height -  function that measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure the height
*
*Return: heigth of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) >= binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	return (1 + binary_tree_height(tree->right));
}


/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree:  pointer to the root node of the tree to measure the balance factor
*
*Return: 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return ((lh - rh));
}
