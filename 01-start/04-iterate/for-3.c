#include <stdio.h>

int main(void)
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        printf("hello\n");
    }
    printf("\n");
    
    for (int i = 0; i < n; i++)
    {
        for (int ii = 0; ii < n; ii++)
        {
            printf("hello nest\n");
        }
    }

    return 0;
}

