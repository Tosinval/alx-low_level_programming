#include <stdio.h>

/**
 * main - print the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("The name of this program is %s\n", argv[0]);

	return (0);
}
