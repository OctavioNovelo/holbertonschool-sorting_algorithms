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
size_t i, j, val;
for (i = 0; i < size - 1; i++)
{
val = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[val])
{
val = j;
}
array[i] = temp;
print_array(array, size);
}
if (val != i)
{
temp = array[i];
array[i] = array[val];
array[val] = temp;
print_array(array, size);
}
}
}

