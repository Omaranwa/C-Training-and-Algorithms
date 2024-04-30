#include <stdio.h>
/*Recursion is the technique of making a function call itself.*/
int sum(int k);
/// @brief main functions
/// @return return 0 for exit
int main()
{
    int result = sum(10);
    printf("%d", result);
    return 0;
}
/// @brief
/// @param k
/// @return
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}
