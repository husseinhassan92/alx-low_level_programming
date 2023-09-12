# include "search_algos.h"


/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t mid, i;
	size_t right = size - 1;

	while (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (left < right)
				printf("%d ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
