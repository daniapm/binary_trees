#include "binary_trees.h"

/**
 * binary_tree_is_full -   function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or size of the tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*si es nodo hoja*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*los subárboles izquierdo y derecho estan llenos*/
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
