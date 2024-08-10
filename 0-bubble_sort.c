#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - Ordena u array de menor a mayor
 *
 * @array: Array a ordenar
 * @size: longitud del array
 *
 * Return: array ordenado
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int cambiados;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		cambiados = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				cambiados = 1;
			}
		}
		if (!cambiados)
			break;
	}
}
