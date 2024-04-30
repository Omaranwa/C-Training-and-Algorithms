#include <stdio.h>
int main()
{
    // normal while loop
    int i = 0;

    while (i < 10)
    {
        printf("%d\n", i);
        i++;
    }

    // do / while loop
    int x = 0;

    do
    {
        printf("%d\n", x);
        x++;
    } while (x < 5);

    // For Loop
    int z;

    for (z = 0; z < 5; z++)
    {
        printf("%d\n", z);
    }
    // Nested Loops
    int d, j;

    // Outer loop
    for (d = 1; d <= 2; ++d)
    {
        printf("Outer: %d\n", d); // Executes 2 times

        // Inner loop
        for (j = 1; j <= 3; ++j)
        {
            printf(" Inner: %d\n", j); // Executes 6 times (2 * 3)
        }
    }

    // C Continue
    // used to jump out of a loop.
    int f;

    for (f = 0; f < 10; f++)
    {
        if (f == 4)
        {
            break;
        }
        printf("%d\n", f);
    }
    // Break
    // breaks one iteration (in the loop), if a specified condition occurs
    // and continues with the next iteration in the loop.
    int l;

    for (l = 0; l < 10; l++)
    {
        if (l == 4)
        {
            continue;
        }
        printf("%d\n", l);
    }
}
