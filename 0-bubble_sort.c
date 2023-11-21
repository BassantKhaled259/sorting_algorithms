#include "sort.h"

/**
*bubble_sort - sort list with a bubble
*@array : the array to print
*@size : number of elements in the array
*/

void bubble_sort(int *array, size_t size)
{
size_t n = 0, x = size;
int temp;

if (array == NULL)
return;
for (x = size; x > 0; x--)
{
for (n = 0; n < size; n++)
{
if (array[n] > array[n + 1])
{
temp = array[n];
array[n] = array[n + 1];
array[n + 1] = temp;
print_array(array, size);
}
}
}
}
