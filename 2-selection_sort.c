#include "sort.h"
/**
 * selection_sort - sort array using selection algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}