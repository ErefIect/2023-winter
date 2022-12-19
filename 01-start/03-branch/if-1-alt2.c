#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    if (a % 2 != 0) {
        printf("a is an odd number\n");
    } else {
        printf("a is an even number\n");
    }
    return 0;
}

