<<<<<<< HEAD
#include "mainn.h"
=======
#include "main.h"
>>>>>>> 0ab42f728d48bd123c51f52faaed0c63b912669d
/**
  *_memcpy - copies n bytes from memory area src
  *to memory area dest.
  *@dest: pointer to destination.
  *@src: pointer to source string.
  *@n: number of bytes to be coppied.
  *
  *Return: pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}

