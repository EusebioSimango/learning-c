#include <stdio.h>

int main(void){
	FILE *file = fopen("hello.md", "r");
	char buffer[255];
	if (file != NULL){
		while(fgets(buffer, 255, file) != NULL){
			printf("%s", buffer);
		}
		fclose(file);
	}

	return (0);
}
