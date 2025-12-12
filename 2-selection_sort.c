#include "sort.h"

/**
 * selection_sort - sorted an array with a selecton algorithm
 *
 * @array: the array to sorted
 * @size: the size of the array
 *
 * no return because void output
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, imin, temp;

	for (i = 0; i < (size - 1); i++)
	{
		imin = i;

		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[imin])
				imin = j;
		}

		temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;
		print_array(array, size);
	}
}
