#include "sort.h"

/**
*selection_sort - sort a list of array
*@array : an array to print
*@size : elements of the array
*/
void selection_sort(int *array, size_t size)

{
size_t a, b, c, d, e;

if (array == NULL)
return;
for (a = 0; a < size; a++)
{
for (c = a, b = a; b < size; b++)
if (array[b] < array[c])
{
c = b;
e = 1;
}
if (e == 1)
{
d = array[c];
array[c] = array[a];
array[a] = d;
print_array(array, size);
e = 0;
}
}
}
