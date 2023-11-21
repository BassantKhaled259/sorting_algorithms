#include "sort.h"

/**
*insertion_sort_list - insert sort algorithm
*@list : linked list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
listint_t *point;
int n;

if (!list)
return;
point = *list;
while (point)
{
while (point)
{
if (point->next)
{
if (point->n > point->next->n)
{
n = point->n;
*(int *)&point->n = point->next->n;
*(int *)&point->next->n = n;
point = *list;
print_list(*list);
break;
}
}
point = point->next;
}
}
}
