#include <stdio.h>

int main()
{
    int myAge = 43;         // an int variable
    int *ptr = &myAge;      // a pointer to store address of myAge Int, can be (int*)
    printf("%d\n", myAge);  // Outputs the value of myAge (43)
    printf("%p\n", &myAge); // Outputs the memory address of myAge
    printf("%p\n", ptr);    // you can get the real value of address by *ptr
    /*pointers can be used for array also*/
    // note: The memory address of the first element is the same as the name of the array
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
        printf("%p\n", &myNumbers[i]);
    }
}
