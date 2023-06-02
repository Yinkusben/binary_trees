#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node -  A function that creates a binary tree node
 * 
 * @parent: The parent to the new node
 * @value: The data to inopput in the new node
 * 
 * Return: The pointer to the newly crerated node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
    binary_tree_t *newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
    newNode->n = value;
    newNode->parent = parent;
    
    return newNode;
}