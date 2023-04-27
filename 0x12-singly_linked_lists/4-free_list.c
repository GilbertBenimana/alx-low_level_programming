#include <stdlib.h>
#include "lists.h"

/**
  * free_list - frees a linked list.
  * @head: pointer to the first node of linked list
  * Description: frees a linked list.
  * Return: returns nothing
  */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
