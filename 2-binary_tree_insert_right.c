#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{		// Si esta vacio creee el nuevo nodo
		binary_tree_t *new;
		if (parent == NULL)
			return (NULL);
        new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);
		if (parent->right != NULL)
		{
			new->right = parent->right;
			parent->right->parent = new;
    	}
		parent->right = new;
		return (new);
}