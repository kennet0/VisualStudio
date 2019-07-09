#include <stdio.h>

int main(void)
{
    int i,n, count=0;
    printf ("숫자를 입력하세요");
    scanf("%d",&n);

    for (i=1; n>=i; i++)
        if ((n%i==0)) 
            {
                count++;
                if (count>2) break;
            }

    if (count ==2)
       printf("소수입니다");
    
   else printf("소수가 아닙니다");

 

    return 0;
}