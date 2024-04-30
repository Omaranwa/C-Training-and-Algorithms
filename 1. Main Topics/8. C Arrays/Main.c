#include <stdio.h>

/*
// used to store multiple values in a single variable
*/
int main()
{
    // making an array
    int myNumbers[] = {25, 50, 75, 100};
    // Access the array
    printf("%d\n", myNumbers[0]);
    // change a value of array
    myNumbers[0] = 33;
    printf("%d\n", myNumbers[0]);

    // looping thou
    int i;
    printf("Looping>>>>>>>>>>>>>>>>>>>>>\n");
    for (i = 0; i < 4; i++)
    {

        printf("%d\n", myNumbers[i]);
    }

    // Declare an array of four integers:
    int my1Numbers[4];

    // Add elements
    my1Numbers[0] = 25;
    my1Numbers[1] = 50;
    my1Numbers[2] = 75;
    my1Numbers[3] = 100;

    // Get Array Size or Length
    // sizeof return in bytes, so the array is Int and int is 4 bytes
    // 4 bytes X 5 = 20
    int Arrays[] = {10, 25, 50, 75, 100};
    printf("%lu\n", sizeof(Arrays)); // Prints 20

    // Length
    // divides the size of the array by the size of one array element
    // gets you how many elements
    int length = sizeof(Arrays) / sizeof(Arrays[0]);

    printf("%d\n", length); // Prints 5

    // Better array Loops
    // loops that work for arrays of any size, which is more sustainable.
    int g;

    for (g = 0; g < length; g++)
    {
        printf("%d\n", Arrays[g]);
    }
}
