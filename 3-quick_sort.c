#include "sort.h"

/**
* quick_sort - Sorts an array of integers in ascending order
* @array: Array to be sorted
* @size: Size of array
*/
void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, size - 1, size);
}

/**
* lomuto - Lomuto partition
* @array: Array to be sorted
* @lower_bund: Lower index of partition array
* @upper_bund: Higher index of partition array
* @size: Size of array
*/
void lomuto(int *array, int lower_bund, int upper_bund, size_t size)
{
	int prtn;

	if (lower_bund > upper_bund)
		return;
	prtn = swap_partition(array, lower_bund, upper_bund, size);
	lomuto(array, lower_bund, prtn - 1, size);
	lomuto(array, prtn + 1, upper_bund, size);
}

/**
 * swap_partition - Swaps arrays in a partition
 * @array: Array to be sorted
 * @lower_bund: Lower index of partition array
 * @upper_bund: Higher index of partition array
 * @size: Size of array
 * Return: Partition index position
 */
int swap_partition(int *array, int lower_bund, int upper_bund, size_t size)
{
	int i, k, temp, pivot;

	i = lower_bund;
	k = lower_bund - 1;
	pivot = array[upper_bund];

	while (i <= upper_bund)
	{
		if (array[i] <= pivot)
		{
			k++;
			if (k != i)
			{
				temp = array[k];
				array[k] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
	return (k);
}
