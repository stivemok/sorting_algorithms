#include "sort.h"

/**
 * bubble_sort - Sorts the array in ascending
 * @array: List of array
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
