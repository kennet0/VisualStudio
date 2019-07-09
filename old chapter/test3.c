#include <stdio.h>

int main(void)
{
    int x;
    printf("입력해주세요");
    scanf("%d",&x);

    if(x>100)
    {
        printf("100이상입니다.");
        if (x>200)
            printf("200이상입니다.");

        else
        {
            printf("200이상은 아닙니다");
        }
        
    }
    else 
        printf("100이상이아닙니다.");

    return 0;


}
    