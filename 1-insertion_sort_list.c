#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using the Insertion sort algorithm
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *prev_node, *next_node, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current)
    {
        next_node = current->next;

        while (current->prev && current->n < current->prev->n)
        {
            prev_node = current->prev;
            temp = current->next;

if (temp)
temp->prev = prev_node;
prev_node->next = temp;
current->prev = prev_node->prev;
current->next = prev_node;
if (prev_node->prev)
prev_node->prev->next = current;
else
*list = current;
prev_node->prev = current;
print_list(*list);
_putchar('\n');
current = prev_node;
}
current = next_node;
}
}
