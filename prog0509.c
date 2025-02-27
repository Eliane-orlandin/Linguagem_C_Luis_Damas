#include <stdio.h>

int x_isdigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int main()
{
    char c;
    while (1)
    {
        c = getchar();
        if (!x_isdigit(c))
            putchar(c);
    }
}