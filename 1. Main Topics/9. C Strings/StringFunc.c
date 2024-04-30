#include <string.h>
#include <stdio.h>

int main()
{
    // print length of a string
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet));

    /* concatenate (combine) two strings */

    char str1[20] = "Hello ";
    char str2[] = "World!";
    char str3[] = "Hi";
    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s\n", str1);

    /* copy the value of one string to another */

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s\n", str2);

    /*Compare Strings*/
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)
}
