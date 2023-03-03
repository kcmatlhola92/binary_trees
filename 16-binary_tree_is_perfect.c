#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node of the tree to check
 * Return: 1 if is full otherwise 0; if tree is NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL || tree->right != NULL)
	{
		l_height = tree_height(tree->left);
		r_height = tree_height(tree->right);
	}
	if (l_height == r_height)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
	}

	if (left != 0 && right != 0)
		return (1);
	return (0);

}

/**
 * tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height
 * Return: height of the node; 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}
