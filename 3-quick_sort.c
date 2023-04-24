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
 * swap_partition - Swaps arrays in a partition
 * @array: Array to be sorted
 * @low: Lower index of partition array
 * @high: Higher index of partition array
 * @size: Size of array
 * Return: Partition index position
 */
int swap_partition(int *array, int low, int high, size_t size)
{
	int i, k, temp, pivot;

	i = low;
	k = low - 1;
	pivot = array[high];

	while (i <= high)
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

/**
* lomuto - Lomuto partition
* @array: Array to be sorted
* @low: Lower index of partition array
* @high: Higher index of partition array
* @size: Size of array
*/
void lomuto(int *array, int low, int high, size_t size)
{
	int prtn;

	if (low > high)
		return;
	prtn = swap_partition(array, low, high, size);
	lomuto(array, low, prtn - 1, size);
	lomuto(array, prtn + 1, high, size);
}
