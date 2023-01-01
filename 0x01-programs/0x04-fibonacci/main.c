#include <stdio.h>

int main(void)
{
	int current, prev, _prev, _current, i;

	prev = 1;
	current = 2;

	for (i = 0; i < 90; i++){
		if (i == 0)
			printf("%d ", prev);
		printf("%d ", current);
		_current = current;
		current = prev + current;
		prev = _current;
	}
	putchar(10);
	return (0);
}

