#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_inorder - funcion que visita en orden asendente
 * @tree: es un puntero al nodo raiz del arbol a recorrer
 * @func: es un puntero a una funciÃ³n que se ejecutar�
 * �¡ en cada nodo del Ã
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
