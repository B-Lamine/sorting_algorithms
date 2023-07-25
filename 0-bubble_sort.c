#include "sort.h"

/**
  * swap - swap two integer elements of an array.
  * @i: integer element.
  * @j: integer element.
  */
void swap(int *i, int *j)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

/**
  * bubble_sort - sort an array of integers using the buuble sort algorithm.
  * @array: pointer to integer array.
  * @size: size of the array.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	char flag = '0';

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				flag = '1';
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
		if (flag == '0')
			return;
	}
}
