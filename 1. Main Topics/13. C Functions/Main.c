#include <stdio.h>

void aHelloWorldFunc()
{
    printf("Hello World\n");
}

void aFuncParmAndArg(char name[])
{
    printf("Hello There: %s\n", name);
}
int main()
{
    // When a parameter is passed to the function, it is called an argument.
    aFuncParmAndArg("Omar");
    aHelloWorldFunc();
    aHelloWorldFunc();
    aHelloWorldFunc();
}
