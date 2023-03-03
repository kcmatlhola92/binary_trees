#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree to measure the balance factor
 * Return: balance factor; or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int br = 0, bl = 0;

	if (tree == NULL)
		return (0);
	br = binary_tree_height(tree->right);
	bl = binary_tree_height(tree->left);
	return (bl - br);
}

/**
 *binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height
 * Return: height of the node; 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
