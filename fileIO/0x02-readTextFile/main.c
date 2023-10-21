#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>

int main(void)
{
  size_t file, content;
  char* buffer;

  file = open("hello.txt", O_RDONLY);
  content = read(file, buffer, 12);
  printf("%ld", content);
  return (0);
}
