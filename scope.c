#include <stdio.h>
#include <stdlib.h>
int g;

enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};

int grv()
{
    return rand();
}

void createarray(int *array, int m, int (*grv)(void))
{
    int i;
    for(i=0; i<m; i++)
    {
        array[i] = grv();
    }
}

int main()
{
    printf("g: %d\n", g);
    double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    int a[] = {10, 6, 0, 2222, -1};
    int i;
    for(i=0; i<5; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
    enum DAY day;
    for(i=MON; i<=SUN; i++)
    {
        printf("MON: %d\n", i);
    }
    //pointer
    int aa = 3;
    int *p;
    p = &aa;
    printf("*P %d\n", *p);


    int list[10];
    createarray(list, 10, grv);
    for(i=0; i<10; i++)
    {
        printf("%d\n", list[i]);
    }
    getchar();
    getchar();
    return 0;
}