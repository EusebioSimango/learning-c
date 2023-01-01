#include <stdio.h>

int main(void)
{
	long current, prev, _current;
	int i;

	prev = 1;
	current = 2;

	for (i = 0; i < 90; i++){
		if (i == 0)
			printf("%ld ", prev);
		printf("%ld ", current);
		_current = current;
		current = prev + current;
		prev = _current;
	}
	putchar(10);
	return (0);
}

