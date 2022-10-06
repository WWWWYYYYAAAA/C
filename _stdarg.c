#include <stdio.h>
#include <stdarg.h>

double sum(int num, ...)
{
    double sum = 0;
    int i;
    va_list valist;
    va_start(valist, num);

    for (i = 0; i < num; i++)
    {
       sum += va_arg(valist, int);
    }
    va_end(valist);
    return sum;
}
int main()
{
    printf("%f\n", sum(3, 2, 5, 8));
    getchar();
    return 0;
}