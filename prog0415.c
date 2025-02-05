#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 255; i++)
    {
        printf("%3d --> \n", i);

        if (i >= 32 && i <= 126)
            printf("%c", i);
        else
            printf(".");

        printf("\n");
    }
    return 0;
}