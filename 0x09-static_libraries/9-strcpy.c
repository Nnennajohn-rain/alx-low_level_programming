#include "main.h"

/**
 * _strcpy - copies the sting pointed to by src
 *
 * including the terminating null byte (\0)
 *
 * to the bufferpointed to by dest
 *
 * @dest: pointerr to the bufferr in which we copy the strring
 *
 * @src: strring to be copied
 *
 * Return: the pointerr to dest
 *
 */

char *_strcpy(char *dest, char *src)

{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
