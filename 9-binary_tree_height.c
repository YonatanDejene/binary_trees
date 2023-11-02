#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: If tree is NULL return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, ri = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lef > ri) ? lef : ri);
	}
	return (0);
}