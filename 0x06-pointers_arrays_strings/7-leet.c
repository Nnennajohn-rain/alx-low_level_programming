#include "main.h"

/**
 * leet - encodes a sting in 1337
 * @s: string to be encoded
 * Return: to the resulting string;
 */

char *leet(char *s)

{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
