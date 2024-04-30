#include <stdio.h>
int ConstValue();
int ANDoperator();
int Oroperator();
int exclusiveORoperator();
int OnesComplementoperator();
int LeftShiftOperator();
int RightShiftOperator();
int SizeofOperator();
int main()
{
    // commented for now
    // ConstValue();
    /*
    //C divides the operators into the following groups:
    //Arithmetic
    //Assignment
    //Comparison
    //Logical
    //Bitwise
    */

    // 1. Arithmetic
    // its basic stuff
    //  +	Addition
    //  -	Subtraction
    //  *	Multiplication
    //  /	Division
    //  %	Modulus
    //  ++	Increment
    //  --	Decrement

    // 2. Assignment
    // = - assignment operator
    // += - addition assignment
    // -= - Subtract assignment
    // *= - Multiply assignment
    // /= - Divide assignment
    // %= - Modulus assignment
    /*     Bitwise Works only on Integer and characters, as it works on Single bits     */
    // 1. &  - Bitwise AND operator - 1 + 1 = 1, 1 + 0 = 0, 0 + 0 = 0.
    ANDoperator();
    // 2. |  - Bitwise inclusive OR - 1 + 1 = 1, 1 + 0 = 1, 0 + 0 = 0.
    Oroperator();
    // 3. ^  - Bitwise exclusive OR - 1 + 1 = 0, 1 + 0 = 1, 0 + 0 = 0.
    exclusiveORoperator();
    // 4. ~ - Bitwise One's Complement - all 1 to 0, all 0 to 1.
    OnesComplementoperator();
    // 5. << - Bitwise Left Shift Operator - Shift the bits by value towards left
    // this has almost a doubling effect, 5 << 1 = 10
    LeftShiftOperator();
    // 6. >> -  Bitwise right Shift Operator - Shift the bits by value towards right
    // this has almost a / effect, 10 >> 1 = 5
    RightShiftOperator();

    /********Comparison Operators**********/
    // == - Equal to - returns 1 if true, 0 if false
    // != - Not equal - returns 0 if true, 1 if false
    // > - Greater than - Returns 1 if the first value is greater than the second value
    // < - Less than - Returns 1 if the first value is less than the second value
    // >= - Greater than or equal to - Returns 1 if the first value is greater than, or equal to, the second value
    // <= - Less than or equal to - Returns 1 if the first value is less than, or equal to, the second value

    /**********Logical Operators*******************/
    // && - Logical and - Returns 1 if both statements are true
    // || - Logical or - Returns 1 if one of the statements is true
    // ! - Logical not - Reverse the result, returns 0 if the result is 1

    /***********Sizeof Operator***********/
    SizeofOperator();
}
int ConstValue(void)
{
    /* code */
    // this gives an error, commented for now
    /*
    const int myNum = 10;
    myNum = 15;
    */
    // a constant variable must be assigned with a value
    // a good Practice is to declare them with uppercase
    const int minutesPerHour = 60;
    const float PI = 3.14;
    printf("Min per Hour =  %d\n", minutesPerHour);
    printf("PI Value Is: %0.2f", PI);
}
int ANDoperator()
{
    int x = 5;
    int y = 7;
    int res = x & y;
    printf("%d\n", res);
}
int Oroperator()
{
    int x = 5;
    int y = 7;
    int res = x | y;
    printf("%d\n", res);
}
int exclusiveORoperator()
{
    int x = 5;
    int y = 7;
    int res = x ^ y;
    printf("%d\n", res);
}
int OnesComplementoperator()
{
    int x = 5;
    int res = ~x;
    printf("%d\n", res);
}
int LeftShiftOperator()
{
    int x = 5;
    int res = x << 1;
    printf("%d\n", res);
}
int RightShiftOperator()
{
    int x = 5;
    int res = x >> 1;
    printf("%d\n", res);
}
int SizeofOperator()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("size of int: %lu\n", sizeof(myInt));
    printf("size of float: %lu\n", sizeof(myFloat));
    printf("size of double: %lu\n", sizeof(myDouble));
    printf("size of char: %lu\n", sizeof(myChar));
}