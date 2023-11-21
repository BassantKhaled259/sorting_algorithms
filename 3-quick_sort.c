#include "sort.h"

/**
*partition - partition array
*@array : sort the array
*@first_node : beginning the array
*@last_node : end of the array
*@size : full size of array
*Return : position of pivot
*/

int partition(int *array, int first_node, int last_node, size_t size)
{ int i = first_node - 1, aux, j;

for (j = first_node; j <= last_node - 1; j++)
{
if (array[j] < array[last_node])
{
i++;
if (1 < j)
{
aux = array[i];
array[i] = array[j];
array[j] = aux;
print_array(array, size);
}
}
}
if (array[i + 1] > array[last_node])
{
aux = array[i + 1];
array[i + 1] = array[last_node];
array[last_node] = aux;
print_array(array, size);
}
return (i + 1);
}

/**
*quicksort - quick sorts with recursion
*@array : array to sort
*@first_node : first position
*@last_node : last position
*@size : full size of array
*/

void quicksort(int *array, int first_node, int last_node, size_t size)
{
int pivot;
if (first_node < last_node)
{
pivot = partition(array, first_node, last_node, size);
quicksort(array, first_node, pivot - 1, size);
quicksort(array, pivot + 1, last_node, size);
}
}
/**
*quick_sort - sort elements of array using quick sort 
*algorithm in ascending order
*@array : to be sorted
*@size : full size of array
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;
quicksort(array, 0, size - 1, size);
}
