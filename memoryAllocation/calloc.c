#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;
    int n, i;
    
    n = 10;
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL){
       printf("Memory not allocated.\n");
       exit(0);
    } else {
      printf("Memory allocated successfully.\n");
      free(p);
      
    }
    return (0);    
}
