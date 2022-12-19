#include <stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int main(void)
{
    int a = 2, b = 3;
    printf("before invoking swap: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("after invoking swap: a = %d, b = %d\n", a, b);
    return 0;
}

