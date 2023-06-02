#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as the left-child of another node
 * 
 *@parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * 
 * Return: a pointer to the newly created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (newNode  == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		binary_tree_t * temp = parent->left;
		parent->left = newNode;
		newNode->n = value;
		newNode->left = temp;
		newNode->right = NULL;
	}
	else
	{
		newNode->n = value;
		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;
		parent->left = newNode;
	}

	return (newNode);
}