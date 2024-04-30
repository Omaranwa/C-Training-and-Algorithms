#include <stdio.h>

int main()
{
    // to print stuffs in printf
    // integer
    int firstNumber = 10;
    // char
    char firstChar = 'a';
    // float
    float firstFloat = 2.5;

    // you can make a calculations on "C"
    int a = 2;
    int b = 5;
    int total = a + b;
    // you can use %i also for integer
    // as for char we can use %c
    // and for float we can use %f
    printf("%d\n", firstNumber);
    printf("%c\n", firstChar);
    printf("%f\n", firstFloat);
    printf("%d\n", total);
    printf("used some magic");
    return 0;
}