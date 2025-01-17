#include "sort.h"
/**
* swap - swap
* @a: pointer
* @b: another one
* Description: a function for swAping
*/
void swap(int *a, int *b)
{
	*a = (*a) ^ (*b);
	*b = (*a) ^ (*b);
	*a = (*a) ^ (*b);
}
/**
* print_array - print_array
* @arr: pointer
* @n: another one
* Description: a function for printing
*/

/**
* bubble_sort - bubble_sort
* @array: pointer
* @size: another one
* Description: a function for swAping
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	for (; i < size - 1 ; i++)
	{
		for (j = 0 ; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
			}
		}
	}
}

