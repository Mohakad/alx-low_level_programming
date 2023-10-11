#include "function_pointers.h"
#include <stdlib.h>
/**
  *array_iterator- execute function given as parameter
  *@array: array
  *@size: size of array
  *@action: func pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);

}
