/*
파일명: ex08-99-homework.c

1번 분석하기
*
**
***
****
*****
******
*******

2번
   *
  **
 ***
****

3번
   *
  ***
 *****
*******

 4번          i
   *          0
  ***         1
 *****        2
*******       3
 *****        4
  ***         5
   *          6  

*/

//#include <stdio.h>

// int main(void)
// {

//     for (int i = 0; i < 7; i++)
//     {
        
//         for (int j = 0; j < i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



//4번문제 풀이
#include <stdio.h>

int main(void)
{
  for (int i = 0; i < 7; i++)
  {
    for(int j = 0; j <7; j++)
    {
        if(i < 7/2+1) {
            if(j < 3-i) {
                printf(" ");
            } else if(j > 3+i) {
                printf(" ");
            } else {
                printf("*");
            }

        } else {
            if(j < i-3) {
                printf(" ");
            } else if (i+j > 9) {
                printf(" ");
            } else {
                printf("*");
            }
        

        }
    }
    printf("\n");
    
  }  return 0;
}