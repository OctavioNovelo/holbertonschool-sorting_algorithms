#include "sort.h"

/**
 *
 */

void insertion_sort_list(listint_t **list)
{
	size_t i;
	int val;
	int pos;
	size_t lista = sizeof(listint_t);
	int tmp;

	for ( i = 0; i < lista; i++)
	{
		val = next;
		pos = next;

		while (val > prev || val < prev) 
		{
			if (val < prev)
			{
			tmp = prev;
			prev = val;
			pos = tmp;
			i++;
			print_list((const listint_t *)*list);
			}

			if (val > prev)
			{
				tmp = prev;
				prev = val;
				pos = tmp;
			print_list((const listint_t*)*list);
			}
		}
	}
}


