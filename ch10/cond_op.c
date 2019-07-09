#include <stdio.h>

int main(void)
{
    int input,a;
    printf("숫자를 입력하세요");
    scanf("%d", &input );

   
    a= (input==0)? 0 :1;

    printf("a는 %d 입니다",a);
    



    return 0;
}