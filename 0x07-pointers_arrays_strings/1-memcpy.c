#include "main.h" 
/**
 * memcypy - function that copies bytes from memory area to memory area
 * @n:numer of bytes 
 * @src:from memory area 
 * @dest:to memory area 
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
 int r = 0;
 int i = n;
 for (; r < i; r++)
 {
 dest[r] = src[r];
 n--;
 }
 return (dest);
}
