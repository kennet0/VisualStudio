#include <stdio.h>

int main(void)
{
    int i,n, count=0;
    printf ("���ڸ� �Է��ϼ���");
    scanf("%d",&n);

    for (i=1; n>=i; i++)
        if ((n%i==0)) 
            {
                count++;
                if (count>2) break;
            }

    if (count ==2)
       printf("�Ҽ��Դϴ�");
    
   else printf("�Ҽ��� �ƴմϴ�");

 

    return 0;
}