#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	
  	if(node->left == NULL && node->right==NULL)     
    	return 1;
	return 0;
}
