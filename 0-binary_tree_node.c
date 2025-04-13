#include "binary_trees.h"

/**
 * binary_tree_node - Crea un nuevo nodo de un árbol binario
 * @parent: Puntero al nodo padre
 * @value: Valor del nuevo nodo
 *
 * Return: Puntero al nuevo nodo o NULL si falla
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Reservar memoria para el nuevo nodo */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	return (NULL);

	/* Inicializar los campos del nodo */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
