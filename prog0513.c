#include <stdio.h>

int Abs(int x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}
int main()
{

    printf("Abs (-5) = %d\n", Abs(-5));
    printf("Abs ( 5) = %d\n", Abs(5));
    return 0;
}