/*
파일명: ex08-01-loop.c

반복문
    특정한 부분의 코드가 반복적으로 수행될 수 있도록 하는 구문

1. while 문
    while(조건)
    {
        반복 수행될 코드
    }

*/
#include <stdio.h>
int main(void)
{
    int num = 0;

    while(num < 3)
    {
        printf("num is %d now\n", num);
        num++;  // 후위 증감연산자 num = num +1 동일
    }

    printf("End while문 - num is %d now\n", num);

    return 0;
}