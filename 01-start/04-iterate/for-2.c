#include <stdio.h>

int main(void)
{
    for (int x = 1; x < 10; x++)
    {
        for (int y = 1; y < 10; y++)
        {
            printf("%dx%d=%d ", y, x, x * y);
        }
        printf("\n");
    }
    return 0;
}

