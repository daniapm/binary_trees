#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert left
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	if (parent == NULL)
		return (NULL);
	new_nodo = binary_tree_node(parent, value);
	if (new_nodo == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new_nodo->left = parent->left;
		parent->left->parent = new_nodo;
	}
	parent->left = new_nodo;
	return (new_nodo);
}
