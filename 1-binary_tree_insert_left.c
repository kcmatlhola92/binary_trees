#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a left node in a binary tree
* @parent: A pointer to hte parent node
* @value: Integer stored on node
* Return: if faill Null, otherwise new_node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
