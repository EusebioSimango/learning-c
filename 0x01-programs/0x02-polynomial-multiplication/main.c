#include <stdio.h>

/**
 * main - Entry point
 * Description: read values a and b of two polynomials and multipy them.
 * Return: Always 0
*/

int main()
{
	int a, b, c, d;
	int p2, p1, p0;

	printf("A value of the D: ");
	scanf("%d", &a);
	printf("B value of the D: ");
	scanf("%d", &b);
	printf("A value of the d: ");
	scanf("%d", &c);
	printf("B value of the d: ");
	scanf("%d", &d);

	p2 = a*c;
	p1 = a*d + b*c;
	p0 = b*d;

	printf("The product is %dx^2 + %dx + %d\n", p2, p1, p0);
	return (0);
}

