#include "binary_trees.h"

/**
*binary_tree_inorder -  through a binary tree using in-order traversal
*@tree: pointer to the root node of the tree to traverse
*@func: pointer to a function to call for each node
*Return:void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		if (tree->left == NULL)
		{
			func(tree->n);
			return;
		}
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right == NULL)
		{
			func(tree->n);
			return;
		}
		binary_tree_inorder(tree->right, func);
	}
}
