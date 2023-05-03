#include <stdio.h>
#include "lists.h"

/**
  * listint_len - counts the elements in a linked list
  * @h: head of the linked list
  * Description: counts the elements in a linked list
  * Return: returns the number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
int c = 0;
if (h != NULL)
{
while (h)
{
h = h->next;
c++;
}
}
return (c);
}
