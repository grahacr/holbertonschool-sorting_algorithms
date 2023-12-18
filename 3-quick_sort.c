#include "sort.h"
/**
 * int_swap - swap integers
 * @first: first element to swap
 * @second: element to swap with first
 */
void int_swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
/**
 * lomuto_part - implement lomuto partition
 * @array: array to partition
 * @low: lowest integer in array
 * @high: highest integer in array
 * Return: index where partition ended up
 *
 */
int lomuto_part(int array[], int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = low;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			int_swap(&array[i], &array[j]);
		}
	}
	int_swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quick_sort - implemention of quick sort algorithm
 * @array: array to partition and sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_part(array, 0, size - 1);
}
