#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: size of the argv array
 * @argv: array that contains the program command line arguments
 * Return: Always 0 if successfull.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
