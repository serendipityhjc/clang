/*
파일명: ex13-05-string-function.c

문자열 처리함수
    1. strlen
        문자열 길이
    2. strcpy
        문자열 복사
    3. strncpy
        문자열 원하는 개수만큼 복사

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "apple is good";
    char str2[50] = "berry is good";
    char str3[50];

    // 각 문자열의 길이 출력
    printf("str1의 길이: %d, str2의 길이: %d\n", strlen(str1), strlen(str2));

    return 0;
}