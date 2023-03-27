#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *p;
	int n, i;

	n = 5;
	p = (int *)malloc(n*sizeof(int));

	if (p == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	} else {
		printf("Memory allocated successfully.\n");
		for (i = 0; i < n; i++){
			p[i] = i*2;
			printf("%i", p[i]);
		}
		free(p);	
	}

	return (0);
}
