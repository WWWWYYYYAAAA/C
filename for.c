#include <stdio.h>
#include<windows.h>
#include <conio.h>

int maxnum(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num;
    scanf("%d", &num);
    (num%2)? printf("1\n"): printf("0\n");

    int Day;
    scanf("%d", &Day);
    switch (Day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        printf("error");
        break;
    }
    int i;
    for(;;)
    {
        printf("一直循环");
        if(_kbhit())
        {
            if(_getch() == 'q')
            {
                break;
            }
        }
      
        Sleep(1000);
    }
    printf("\n");
    printf("max: %d\n", maxnum(5, 7));
    getchar();
    getchar();
    return 0;
}