#include <stdio.h>

int main(int argc, char const *argv[])
{
    // for loop to only print even values between 0 and 10
    for (int i = 0; i <= 10; i = i + 2)
    {
        printf("%d\n", i);
    }

    // program that prints the multiplication table for a specified number
    int number = 2;
    int i;

    // Print the multiplication table for the number 2
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
