#include "binary_trees.h"

/**
* binary_tree_node - This function will create a binary tree node
* @parent: the parent of the new created node
* @value: the value of the created node
* Return: Pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
