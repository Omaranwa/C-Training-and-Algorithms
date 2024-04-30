#include "main.h"

int main()
{
    // Create variables
    int myNum = 5;           // Integer (whole number) 2 to 4 bytes
    float myFloatNum = 5.99; // Floating point number 4 bytes and Sufficient for storing 6-7 decimal digits
    char myLetter = 'D';     // Character 1 byte
    double myDouble = 6.99;  // 8 bytes, Sufficient for storing 15 decimal digits

    // Print variables
    // for Integer use the %d or %i in printf
    printf("%d\n", myNum);
    // for float use %f or %F
    printf("%f\n", myFloatNum);
    // for char use %c
    printf("%c\n", myLetter);
    // for double use %lf
    printf("%1f\n", myDouble);
    // DecimalPrecision();
    TypeConversion();
}

int DecimalPrecision(void)
{
    /* a test for Decimal Precision */
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    // Default will show 6 digits after the decimal point
    printf("%f\n", myFloatNum);   // Outputs 3.500000
    printf("%lf\n", myDoubleNum); // Outputs 19.990000

    // as for Decimal Precision
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits

    return 0;
}
int TypeConversion()
{
    // there are 2 types of Type Conversion
    // 1 - Implicit Conversion (automatically)
    // notice that you may lose data on this process
    // Automatic conversion: int to float
    float myFloat = 9;
    int myInt = 9.99;
    printf("%f\n", myFloat); // 9.000000
    // Automatic conversion: float to int
    printf("%d\n", myInt); // 9

    /**************************************************************/

    // 2 - Explicit Conversion (manually)
    // Manual conversion: int to float
    float sum = (float)5 / 2;

    printf("%f\n", sum); // 2.500000
}