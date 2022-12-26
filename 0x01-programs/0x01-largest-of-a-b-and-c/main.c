#include <stdio.h>

/**
 * main - Entry point
 * Description: read 3 numbers and return the largest.
 * Return: Always 0 (Success)
*/
int main()
{
	int a, b, c;

	printf("Enter A B and C: ");
	scanf("%d%d%d", &a, &b, &c);

	if (a>b) {
		if (a>c)
			printf("A is the largest number.\n");
		else
			printf("C is the largest number.\n");
	}
	else {
		if (b>c)
			printf("B is the largest number.\n");
		else
			printf("C is the largest number.\n");
	}
	return (0);
}

