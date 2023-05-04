#include "lists.h"

/**
*free_listint is used to free a linked list
*@head is the  head of the list
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
