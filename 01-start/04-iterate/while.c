#include <stdio.h>

int main(void)
{
    int count_down = 10;
    while (count_down >= 0)
    {
        if (count_down != 0)
        {
            printf("%d\n", count_down);
        }
        else
        {
            printf("%d!!!\n", count_down);
        }
        count_down--;
    }
    return 0;
}

