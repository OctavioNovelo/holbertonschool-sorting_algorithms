#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <stdio.h>
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

/** Print functions **/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/** Prototypes **/

/**
 * bubble_sort - Algorithm bubble sort
 * @array: Array of ints
 * @size: Size of array
 */
void bubble_sort(int *array, size_t size); /** 0 **/

/**
 * insertion_sort_list - Algorithm
 * @list: List
 */
void insertion_sort_list(listint_t **list); /** 1 **/

/**
 * selection_sort - Algorithm
 * @array: Array of ints
 * @size: Size of array
 */
void selection_sort(int *array, size_t size); /** 2 **/

/**
 * quick_sort - Algorithm
 * @array: Array of ints
 * @size: Size of array
 */
void quick_sort(int *array, size_t size); /** 3 **/

/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b);

/**
 * partition - Function that sets the pivot for quick_sort
 * @array: Array to partition
 * @size: Size of array
 * Return: (i + 1)
 */
size_t partition(int array[], size_t size);

/**
 * print_sort - Function that prints as it should
 * @array: Array to be printed
 * @size: Size of array
 * @init: Should initialize array
 * Return: 0
 */
void print_sort(int array[], size_t size, int init);

#endif /* SORT_H */
