#include "binary_trees.h"
/**
 * count_nodes - counts nodes
 * @tree: pointer to node
 * Return: number of nodes
 */
int count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (count_nodes(tree->left) + count_nodes(tree->right) + 1);
}
/**
 * check_complete - ckecks if tree is complete
 * @tree: pointer to tree
 * @index: index of node
 * @nodes: number of nodes
 * Return: 1 if complete, 0 otherwise
 */
int check_complete(const binary_tree_t *tree, int index, int nodes)
{
	if (!tree)
		return (1);
	if (index >= nodes)
		return (0);

	return (check_complete(tree->left, 2 * index + 1, nodes) &&
			check_complete(tree->right, 2 * index + 2, nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nodes, index = 0, status;

	if (!tree)
		return (0);
	nodes = count_nodes(tree);
	status = check_complete(tree, index, nodes);

	return (status);
}
