#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: root node of the tree to count the number of nodes
 * Return: number of matching nodes; or 0 if tree is NULL
 * A NULL pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);

}
