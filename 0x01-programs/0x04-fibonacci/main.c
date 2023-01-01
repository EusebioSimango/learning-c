#include <stdio.h>

int main(void)
{
	long current, prev;
	int counter, x;

	prev = 1;
	current = 2;

	printf("Sequence of how many numbers: ");
	scanf("%d", &x);
	
	printf("%ld ", prev);
	for (counter = 1; counter < x; counter++){
		printf("%ld ", current);
		int _current = current;
		current = prev + current;
		prev = _current;
	}
	putchar(10);
	return (0);
}

