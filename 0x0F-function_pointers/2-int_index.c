#include "function_pointers.h"

/**
*int_index - searches for an integer
*@array:the int  Array
*@size: the array array
*@cmp: function  compare
*
*Return: returns -1 if no element match
* or when size is less than zero
*return pointer to the first corresponding element
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);

}
