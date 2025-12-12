#include "sort.h"

/**
 * _swap - swaps two integers in an array
 *
 * @a: first integer
 * @b: second integer
 * @array: the array
 * @size: the size of the array
 *
 * Return: void
 */
void _swap(int *a, int *b, int *array, size_t size)
{
	int temp;

	if (*a != *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}

/**
 * lomuto_partition - do partition of an array with lomuto
 *
 * @array: the array
 * @low: starting index
 * @high: ending index (pivot)
 * @size: size of the array (for printing)
 *
 * Return: index of the pivot 
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
			_swap(&array[i], &array[j], array, size);
		}
	}
	_swap(&array[i + 1], &array[high], array, size);
	return (i + 1);
}

/**
 * quicksort_recursive - recursively applies Quick Sort
 *
 * @array: the array
 * @low: starting index
 * @high: ending index
 * @size: size of the array
 *
 * Return: void
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		quicksort_recursive(array, low, pivot_index - 1, size);
		quicksort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick Sort algorithm
 * @array: the array to sort
 * @size: size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort_recursive(array, 0, (int)size - 1, size);
}