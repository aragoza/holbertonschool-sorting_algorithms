#include "sort.h"

/**
 * _swap - swap two element
 *
 * @a: first pointer
 * @b: second pointer
 *
 * no return because void output
 */

void _swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomutopartition - do partition and change the pivot if necessary
 *
 * @array: the array
 * @low: the lower index
 * @high: the higher index to compare aka the pivot
 *
 * Return: (i + 1) index of the pivot
 */

int lomutopartition(int array[], int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			_swap(&array[i], &array[j]);
		}
	}

	_swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quicksortrange - sort recursively with quick sort
 *
 * @array: The array
 * @low: The starting index
 * @high: The ending index
 * @size: The total size of the array (used for printing).
 *
 */

void quicksortrange(int array[], int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = lomutopartition(array, low, high);
		print_array(array, size);

		quicksortrange(array, low, i - 1, size);
		quicksortrange(array, i + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *
 * @array: The array to sort.
 * @size: The size of the array.
 *
 * no return because void output
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		quicksortrange(array, 0, (int)size - 1, size);
	}
}
