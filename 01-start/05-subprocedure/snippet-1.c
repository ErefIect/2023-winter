#include <stdio.h>

void hello_world(void);

int main(void)
{
    hello_world();
    hello_world();
    hello_world();
    return 0;
}

void hello_world(void)
{
    printf("hello world\n");
}

