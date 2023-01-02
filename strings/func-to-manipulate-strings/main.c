#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    char str3[100];

    // Concatenate str2 to str1
    strcat(str1, str2);
    printf("str1: %s\n", str1);  // Outputs "Hello, world!"

    // Copy str1 to str3
    strcpy(str3, str1);
    printf("str3: %s\n", str3);  // Outputs "Hello, world!"

    // Compare str1 and str3
    if (strcmp(str1, str3) == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

    // Get the length of str1
    int len = strlen(str1);
    printf("str1 length: %d\n", len);  // Outputs 13

    // Search for the substring "world" in str1
    char *substr = strstr(str1, "world");
    if (substr) {
        printf("Found substring at index %ld\n", substr - str1);  // Outputs 7
    } else {
        printf("Substring not found\n");
    }

    return 0;
}

