/*Void Pointers and Memory Copying
Goal: Use void pointers to create a generic memory copying utility function for embedded data types.
Activity:

Declare a function mem_copy(void *dest, const void *src, size_t n) that copies n bytes from src to dest:
1
void mem_copy(void *dest, const void *src, size_t n);
Within the function, use char * pointers to copy data byte-by-byte.
Test the function by copying an array of integers and an array of floats.*/