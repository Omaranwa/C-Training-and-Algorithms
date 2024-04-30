#include <stdio.h>
void ReadAndPrintFile();
int main()
{
    /*// a pointer for type FILE To use
    FILE *fptr;
    // "w" for write Mode
    fptr = fopen("W.txt", "w");
    // add some text to the file
    fclose(fptr);
    // we can add other texts without deleting older content
    //  using append mode "a"
    fptr = fopen("W.txt", "a");
    // adding the txt
    fprintf(fptr, "\nAnother Hello World!");
    // close the file
    fclose(fptr);
    fprintf(fptr, "Hello World");
    */
   ReadAndPrintFile();
}

void ReadAndPrintFile()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("W.txt", "r");

    // Store the content of the file
    char myString[200];

    // Read the content and store it inside myString
    fgets(myString, 200, fptr);

    // Print the file content
    printf("%s", myString);

    // Close the file
    fclose(fptr);
}
