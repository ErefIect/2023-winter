#include <stdio.h>

int sum_of_sq(int a, int b)
{
    return a * a + b * b;
}

int main(void)
{
    printf("%d\n", sum_of_sq(3, 4));
    return 0;
}

