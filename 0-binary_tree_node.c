#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node
 *
 * @parent: Pointer to parent node
 *
 * @value: Value of node to be created
 *
 * Return: If error occurs - NULL
 *         Otherwise - Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));

    if (!new)
        return (NULL);

  new->n = value;
  new->parent = parent;
  new->left = NULL;
  new->right = NULL;

  return(new);
}
