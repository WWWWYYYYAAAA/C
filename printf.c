#include <stdio.h>
#include <float.h>

int main()
{
    int a;
    float b;
    a= 1;
    printf("HhHhHhHh %d\n", a);
    printf("size: %lu\n", sizeof(b));
    printf("max: %E\n", FLT_MAX);
    printf("min: %E\n", FLT_MIN);
    printf("precision: %d\n", FLT_DIG);
    getchar();
    getchar();
    return 0;
}