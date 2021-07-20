#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
		return;
 
    /* primero elimine ambos subnodos */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
   
    /* luego elimine el arbol */
    free(tree);
}