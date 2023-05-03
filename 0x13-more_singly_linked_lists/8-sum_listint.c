#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n)
  * @head: listint_t
  * Description: returns the sum of all the data (n)
  * Return: returns int
  */
int sum_listint(listint_t *head)
{
int a = 0;
if (head)
{
while (head)
{
a += head->n;
head = head->next;
}
}
return (a);
}
