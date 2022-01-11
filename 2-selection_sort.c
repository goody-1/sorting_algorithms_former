#include "sort.h"

/**
 * selection_sort - function to sort an array using selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array to be sorted
 *
 * Return: void
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, position;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		position = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[position] > array[j])
				position = j;
		}
		if (position != i)
		{
			temp = array[i];
			array[i] = array[position];
			array[position] = temp;
			print_array(array, size);
		}
	}
}
