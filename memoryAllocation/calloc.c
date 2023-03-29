#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;
    int n, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    if (p == NULL){
       printf("Memory not allocated.\n");
       exit(0);
    } else {
      printf("Memory allocated successfully using calloc.\n");
      printf("Enter the elements of the array.\n");
      for (i = 0; i < n; i++){
	      printf("pos %d: ", i);
	      scanf("%d", p+i);
      }
      printf("The elements: ");
      for (i = 0; i < n; i++) {
          if (i == (n-1))
             return (printf("%d\n", *(p+i)));
          printf("%d | ", *(p+i));
      }
      free(p);
      
    }
    return (0);    
}
