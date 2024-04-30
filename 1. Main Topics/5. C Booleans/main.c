// in C bool type is not a built-in data type, like int or char
// you need this header to use it
#include <stdbool.h>
#include <stdio.h>

int main()
{
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d\n", isFishTasty);      // Returns 0 (false)
    printf("%d\n", 10 > 9);           // Returns 1 (true) because 10 is greater than 9
    // an example
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge)
    {
        printf("Old enough to vote!\n");
    }
    else
    {
        printf("Not old enough to vote.\n");
    }

    // short hand if
    int time = 20;
    (time < 18) ? printf("Good day.\n") : printf("Good evening.");
}
