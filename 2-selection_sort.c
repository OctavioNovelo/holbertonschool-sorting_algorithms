#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: Array of integers
 * @size: Size of array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	int val;

	for (i = 0; i < size - 1; i++)
	{
		val = array[i];
	}
	for (j = 1; j < size - 1; j++)
	{
		if (array[j] < val)
		{
			temp = array[j];
		}
		array[i] = temp;
		print_array(array, size);
	}
}

