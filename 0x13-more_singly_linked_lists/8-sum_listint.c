#include "lists.h"

/**
 *sum_listint is used to sums up all the data in a linked list
 *@head  is where head of the list
 *Return sum of the number
 */

int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sum = 0;

while (cursor != NULL)
{
sum += cursor->n;
cursor = cursor->next;
}
return (sum);
}
