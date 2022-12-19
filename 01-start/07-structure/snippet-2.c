#include <stdio.h>
#include <math.h>    // sqrt

typedef struct Point
{
    double x, y;
} Point;

double ecul_distance(Point p, Point q)
{
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}

int main(void)
{
    Point a = {0, 0};
    Point b = {3, 4};
    printf("%lg\n", ecul_distance(a, b));
    return 0;
}

