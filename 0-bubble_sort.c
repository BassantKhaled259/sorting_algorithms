#include "sort.h"

/**
*bubble_sort - sort list with a bubble
*@array : the array to print
*@size : number of elements in the array
*/

void bubble_sort(int *array, size_t size)
{
size_t i = 0, x = size;
int temp;

if (array == NULL)
return;
for (x = size; x > 0; x--)
{
for (i = 0; i < size; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array, size);
}
}
}
}
