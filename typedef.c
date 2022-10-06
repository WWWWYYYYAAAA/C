#include <stdio.h>
#define TRUE  1
#define FALSE 0

typedef unsigned char BYTE;

int main()
{
    BYTE b1;
    char str[100];
    gets(str);
    puts(str);
    int c;
    c = getchar();
    putchar(c);
   
    
    getchar();
    getchar();
    return 0;
}