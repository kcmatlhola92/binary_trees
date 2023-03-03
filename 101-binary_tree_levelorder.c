#include "binary_trees.h"
/**
 * find_height - finds height of binary tree
 * @tree: tree to traverse
 * Return: height(int)
 */
int find_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (-1);
	if (!tree->left && !tree->right)
		return (0);
	left = find_height(tree->left) + 1;
	right = find_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}
/**
 * print_data - prints data
 * @tree: tree to traverse
 * @level: level of tree
 * @func: pointer to function
 * Return: void
 */
void print_data(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!level)
		func(tree->n);
	else
	{
		level--;
		print_data(tree->left, level, func);
		print_data(tree->right, level, func);
	}
}
/**
 * binary_tree_levelorder - uses level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (tree && func)
	{
	height = find_height(tree);
	for (level = 0; level < height + 1; level++)
		print_data(tree, level, func);
	}
}
