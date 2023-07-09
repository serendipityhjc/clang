/*
파일명: ex07-02-conditional.c

2. switch 문

*/
#include <stdio.h>

int main(void)
{
    int num = 1;
    switch (num)
    {
        case 0:
            printf("0 입니다.\n");
            break;
        case 1:
            printf("1 입니다.\n");
            break;
        case 2:
            printf("2 입니다.\n");
            break;
        case 3:
            printf("3 입니다.\n");
            break;
        default:
            printf("0 ~ 3 이 아닙니다.");
            break;
    }

    

    return 0;
}