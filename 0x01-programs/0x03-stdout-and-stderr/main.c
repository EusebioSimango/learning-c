#include <unistd.h>
#include <stdio.h>

int main(void)
{
    fprintf(stdout, "This message will go to stdout\n");
    fprintf(stderr, "This message will go to stderr\n");
    return (0);
}
