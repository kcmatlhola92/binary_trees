#include "binary_trees.h"
/**
 *binary_tree_height - function that measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: height of the node or   0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	 size_t left_height = 0;
	 size_t right_height = 0;

	if ((tree == NULL) || (!tree->left && !tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);

}
