#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list
  * @head: original linked list
  * @str: string to add to the node
  * Description: adds a new node at the end of a list
  * Return: address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_list, *temp;
if (str != NULL)
{
new_list = malloc(sizeof(list_t));
if (new_list == NULL)
return (NULL);
new_list->str = strdup(str);
new_list->len = _strlen(str);
new_list->next = NULL;
if (*head == NULL)
{
*head  = new_list;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_list;
return (temp);
}
}
return (NULL);
}

/**
  * _strlen - returns the length of a string
  * @s: String to count
  * Description: returns the length of a string
  * Return: string length
  */
int _strlen(const char *s)
{
int c = 0;
while (*s)
{
s++;
c++;
}
return (c);
}
