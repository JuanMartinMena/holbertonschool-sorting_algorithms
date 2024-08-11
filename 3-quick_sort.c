#include "sort.h"
/**
 * swap - Swaps two elements in an array
 * @a: First element
 * @b: Second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * lomuto_partition - Partitions the array using Lomuto's scheme
 * @array: The array to partition
 * @low: The starting index
 * @high: The ending index
 * @size: The size of the array
 *
 * Return: The index of the pivot
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}
/**
 * quicksort - Sorts a sub-array using the Quick sort algorithm
 * @array: The array to sort
 * @low: The starting index of the sub-array
 * @high: The ending index of the sub-array
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort(array, 0, size - 1, size);
}
