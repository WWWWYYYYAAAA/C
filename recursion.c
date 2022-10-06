#include <stdio.h>
#define FIRST 1
#define SECOND 1
int fibinac(int i)
{
    if (i == 1)
        return FIRST;
    else if (i == 2)
        return SECOND;
    else
        return fibinac(i - 1) + fibinac(i - 2);
}

int main()
{
    int i;
    for (i = 1; i < 11; i++)
    {
        printf("%d\n", fibinac(i));
    }
    getchar();
    getchar();
    return 0;
}