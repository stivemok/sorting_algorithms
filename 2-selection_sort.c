#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}
		if (i != k)
		{
			temp = array[i];
			array[i] = array[k];
			array[k] = temp;
			print_array(array, size);
		}
	}
}
