#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *nodo = malloc(sizeof(binary_tree_t));
    // Asignar el dato e iniciar hojas
    nodo->parent = parent;
	nodo->n = value;
    return nodo;
}
