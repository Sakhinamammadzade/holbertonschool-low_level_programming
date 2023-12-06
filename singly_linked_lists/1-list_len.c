#include "lists.h"
/**
 * list_len - function to print list
 * @h: pointer to the beginning of the list
 * Return: The count of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
