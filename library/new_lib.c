#include <stdlib.h>

char** list_of_pointers;
int number_of_pointers = 0;

void* new (size_t size) 
{
    number_of_pointers++;
    list_of_pointers = (char**)realloc(list_of_pointers, number_of_pointers * sizeof(char*));
    list_of_pointers[number_of_pointers - 1] = malloc(size);
    return (void*)list_of_pointers[number_of_pointers - 1];
}

void __attribute__((destructor)) destructor(void)
{
	for (int i = 0; i < number_of_pointers; i++)
        	free(list_of_pointers[i]);
    free (list_of_pointers);
}
