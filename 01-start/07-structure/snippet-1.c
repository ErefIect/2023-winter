#include <stdio.h>
#include <stdlib.h>

struct Rgb
{
    unsigned char red, green, blue;  // 0~255
};

void output_color(struct Rgb c)
{
    printf("%.2x%.2x%.2x\n", c.red, c.green, c.blue);
}

int main(void)
{
    struct Rgb red;
    red.red = 0xff;
    red.green = 0;
    red.blue = 0;

    output_color(red);

    struct Rgb *pWhite;
    pWhite = (struct Rgb *) malloc(sizeof(struct Rgb));

    output_color(*pWhite);

    return 0;
}

