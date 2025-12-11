#ifndef _SORT_H_
#define _SORT_H_

<<<<<<< HEAD
#include <stddef.h>

=======
>>>>>>> c2ef1b1 (necessary file for the project algorithm)
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

<<<<<<< HEAD
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void _swap(int *a, int *b);
int lomutopartition(int array[], int low, int high);
void quicksortrange(int array[], size_t low, size_t high, size_t size);

=======
void selection_sort(int *array, size_t size);

>>>>>>> c2ef1b1 (necessary file for the project algorithm)
#endif /** _SORT_H_ */