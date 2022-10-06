#include <stdio.h>
#define FILE_SIZE 30
#undef  FILE_SIZE
#define FILE_SIZE 42

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
    getchar();
    getchar();
    return 0;
}