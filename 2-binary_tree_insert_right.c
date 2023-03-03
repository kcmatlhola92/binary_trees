#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a right node in a binary tree
* @parent: A pointer to hte parent node
* @value: Integer stored on node
* Return: if faill Null, otherwise new_node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
