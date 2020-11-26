#include<stdlib.h>
/*
In C language functions used for dynamic memory allocation are :
    malloc(),calloc(),realloc()
To free the dynamically allocated memory we use the :
    free()
function.
*/
/*malloc() : allocates a memory block of length = size bytes and returns a pointer to the block.
  Returns NULL if system does not have enough memory*/
//Syntax of malloc()
void *malloc(size_t size);
//a simple implementation
//int* p=(int*)malloc(size_t sizeof(int));
/*example commented out due to IDE warnings*/

/*calloc() : allocates memory block of length = num*size bytes and returns a pointer to the block.
  returns NULL in case of insufficient memory. It initializes every byte to 0*/
//Syntax of calloc()
void *calloc(size_t num,size_t size);

/*realloc() : used to change sizeof memory block previously allocated and pointed to by ptr ,
  returns a memoryblock of a newSize,
  if newSize>originalSize , copies previously allocated to memory to new memory block.
  if pointer returned is different from that previously used , do not use previous pointer anymore,
  in general , do not use a pointer once it has been passed to the realloc() function,
  if ptr==NULL then realloc() function works the same way as malloc() function*/
//Syntax of realloc()
void *realloc(void *ptr,size_t newSize);

/*free() : memory allocated using malloc(),calloc() and realloc() needs to be freed using free() function.
  It puts the previously allocated memory back to the heap section*/
//Syntax of free()
void free(void *pointer);