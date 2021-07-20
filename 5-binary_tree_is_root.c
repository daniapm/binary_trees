#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

int binary_tree_is_root(const binary_tree_t *node)
{

	if(node->parent != NULL || node == NULL)     
    	return 0;
	return 1;
}