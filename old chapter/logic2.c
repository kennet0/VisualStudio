#include <stdio.h>

int main(void)
{
    printf("숫자를 입력하세요");
    int x;
    scanf("%d",&x);
    if ((x>100) && (x<50))
        printf("good");

    else
    {
        printf("bad");   
    }
    return 0;
    




    
    }