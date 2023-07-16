/*
파일명: ex15-04-function4.c
*/
#include <stdio.h>

// 입력(매개변수)값과 반환(return)값이 모두 없는 함수
void guide(void)
{
    printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
    printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다.\n");
}

int main(void)
{
    guide();

    return 0;
}