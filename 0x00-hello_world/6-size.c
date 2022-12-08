#include <stdio.h>

/**
 * main - print size of variable
 *
 * Return: 0
 */
int main(void)
{
	char A;
	int B;
	long int C;
	long long int D;
	float F;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(B));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(C));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(D);
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(F);
	return (0);
}	
