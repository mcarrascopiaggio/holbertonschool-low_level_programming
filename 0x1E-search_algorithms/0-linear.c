#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: first index where value is located or
 * if not array or value not in array returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t flag = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			flag = 1;
			break;
		}
		i = i + 1;
	}
	if (flag == 1)
		return (i);
	else
		return (-1);
}
