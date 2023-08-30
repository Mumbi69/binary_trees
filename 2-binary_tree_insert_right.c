#include "binary_trees.h"

/**
* binary_tree_insert_right - insertsa node as the right-child
* of another node
* @parent: a pointer to the node to insert the right-child in
* @value: the value to store in the node
*
* Return: a pointer to the created node, NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
