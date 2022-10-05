#include <stdio.h>
#include <float.h>

int x;
int y;
int addtwonum()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}

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
    
    volatile int num;
    num = 4;
    printf("num: %d\n", num);
    num = addtwonum();
    printf("num: %d\n", num);

    const int VAR = 5;
    //把常量定义为大写字母形式，是一个很好的编程习惯。


    getchar();
    getchar();
    return 0;
}