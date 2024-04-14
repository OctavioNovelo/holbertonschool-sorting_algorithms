#include "sort.h"

/**
 *
 */

void bubble_sort(int *array, size_t size);

int temp;
size_t i, j;

for (i = 0; i < n-1; ++i)
{
	for (j = 0; j < n-1; ++j)
	{
		if (array[j] > array[j+1])
		{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			print_array(array, size)
		}
	}
}
return (0);

