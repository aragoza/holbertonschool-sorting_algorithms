#include "sort.h"

/**
 * _swap - swap two element
 *
 * @a: first pointer
 * @b: second pointer
 *
 * no return because void output
 */

void _swap(char *a, char *b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

int lomutopartition(int arr[], int low, int high)
{
	int pivot, start, end, k, i;

	pivot = arr[low];
	start = low;
	end = high;
	k = high;

	for (i = high; i > low; i--)
	{
		if (arr[i] > pivot)
			_swap(&arr[i], &arr[k]);
	}

	return (k);
}

/**
 *
 *
 *
 *
 *
 *
 *
 */

void quicksortrange(int arr[], size_t low, size_t high)
{
	size_t i;

	if (low < high)
	{
		i = lomutopartition(arr, low, high);
		
		if (i > 0)
			quicksortrange(arr, low, i-1);
		quicksortrange(arr, i+1, high)
	}

}

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		quick_sort(arr, 0, size-1);
	}
}