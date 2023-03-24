#include <stdio.h>

int main(void)
{
  FILE *file;
  char c;

  file = fopen("hello.md", "r");
  if (file)
  {
    while ((c = getc(file)) != EOF)
      printf("%c", c);
  }
  else
  {
    printf("[Error] - Something went wrong!");
  }
  fclose(file);
  return (0);
}
