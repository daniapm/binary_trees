#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{		// Si esta vacio creee el nuevo nodo
        if (parent->left == NULL) {
           parent->left = binary_tree_node(parent, value);
        } else {
            // Si la izquierda ya está ocupada, recursividad ;)
            parent->left = binary_tree_insert_left(parent->left, value);
    }
	return (parent);
}
