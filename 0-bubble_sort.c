#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - that sorts an array of integers in ascenging
 * order using the bubble sort algorithm.
 * @array: the array will sorts.
 * @size: size of the array.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j;
	int a;

	if (array == NULL)
		exit(98);

	for (i = 0; i < size; i++)
	{
		j = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				a = array[j + 1];
				array[j + 1] = array[j];
				array[j] = a;
				print_array(array, size);
			}
		}

	}
}
