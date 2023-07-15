/*
파일명: ex11-02-arrayAndPointer2.c

포인터 이용 배열 연산
    포인터 변수의 값을 1씩 증가시켜 '포인터형'의 크기만큼 주소값 증가

*/
#include <stdio.h>

int main(void)
{
    int num = 3;
    int* ptr = &num;

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    ptr++;
    printf("%p\n", ptr);   // int형이므로 4바이트 크기만큼 한칸 이동
    printf("%d\n", *ptr);  //초기화가 안되어서 이상한 값(컴퓨터 쓰레기(?)값)이 나옴

    short sarr[3] = {1,2,3};
    int iarr[3] = {10, 20, 30};
    
    // 인덱스 번호를 통한 접근
    printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
    printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

    // 포인터 연산을 통한 접근
    printf("%d %d %d\n", *sarr, *(sarr+1), *(sarr+2));
    printf("%d %d %d\n", *iarr, *(iarr+1), *(iarr+2));
    
    return 0;
}