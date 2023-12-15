#include "sort.h"
/**
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;

	for (i = 0, i < size - 1; i++)
	{
		for (j = 0; j < size-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arry[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
