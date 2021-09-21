#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
    /*char arr1[] = "hello";   
    char arr2[] = { 'h','e','l','l','o','\0'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    int len = strlen("arr1");
    printf("%d", len);
    printf("%d\n", strlen(arr2));
    printf("%c\n", '\'');
    printf("%c\n", '\"');
    printf("%c\n", '\\');
    printf("\a\a\a");
    printf("%c\n", '\130');
    printf("%c\n", '\65');
    printf("%d\n", strlen("cas\tok\ndls\328\a\rea.c"));*/

    int sr = 0;
    printf("1还是2？\n");
    scanf("%d", &sr);
    if (sr == 1)
    {
        printf("你选的是1");
    }
    else
    {
        printf("你选的是2");
    }
    int y = 1;
    while (y < 10000)
    {
        printf("123456789");
        y++;
    }
    if (y == 10000)
    {
        printf("目的以达成");
    }
    return 0;
}



