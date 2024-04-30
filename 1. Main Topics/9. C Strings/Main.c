#include <stdio.h>
int main()
{
    // A string
    char greetings[] = "Hello World!";

    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);

    greetings[0] = 'g';

    printf("%c\n", greetings[0]);

    // looping strings

    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("%c", carName[i]);
    }

    // strings - Special Characters
    // \" is Double Quote
    // \' is Single Quote
    // \\ Adds A backlash
    char txt[] = "We are \\the so-called \"Vikings\" from the \'north.\'";

    //
    printf("%s", txt);
}
