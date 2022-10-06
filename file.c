#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
 
extern int errno ;

#define FILE_SIZE 30
#undef  FILE_SIZE
#define FILE_SIZE 42

#if !defined (MESSAGE)
   #define MESSAGE "You wish!"
#endif

int main()
{
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    fp = fopen("test.txt", "a+");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);//空格停止

    fgets(buff, 255, fp);
    printf("2: %s\n", buff);//\n停止

    fgets(buff, 255, fp);
    printf("3: %s\n", buff);
    fclose(fp);

    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    printf("%d\n", FILE_SIZE);

    #pragma message( "Pentium processor build" )//send a message when compiling
    //d:\focus_task\C\file.c:41:48: note: #pragma message: Pentium processor build

    int sum = 17, count = 5;
    double mean;

    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean);

    printf("Here is the message: %s\n", MESSAGE);  

    FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb");
    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "错误号: %d\n", errnum);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror( errnum ));
    }
    else
    {
        fclose (pf);
    }
    getchar();
    getchar();

    int dividend = 20;
    int divisor = 0;
    int quotient;

    if ( divisor == 0)
    {
        fprintf(stderr, "divisior_0_error...ending...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient 变量的值为 : %d\n", quotient );
    exit(0);
    
    return 0;
}