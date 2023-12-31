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
 * quick_sort_recursion - recursively quick sort array
 * @array: array to sort
 * @low: lowest point in array
 * @high: highest point in array
 */
void quick_sort_recursion(int *array, int low, int high)
{
	int partindex;

	if (low < high)
	{
		partindex = lomuto_part(array, low, high);
		quick_sort_recursion(array, low, partindex - 1);
		quick_sort_recursion(array, partindex + 1, high);
	}
}

/**
 * lomuto_part - implement lomuto partition
 * @array: array to partition
 * @low: lowest integer in array
 * @high: highest integer in array
 * Return: index where partition ended up
 *
 */
int lomuto_part(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = 0;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			int_swap(&array[i], &array[j]);
		}
	}
	int_swap(&array[i + 1], &array[high]);
	print_array(array, high - low + 1);
	return (i + 1);
}
/**
 * quick_sort - implemention of quick sort algorithm
 * @array: array to partition and sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 0)
	{
		quick_sort_recursion(array, 0, size - 1);
	}
}
