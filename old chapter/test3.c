#include <stdio.h>

int main(void)
{
    int x;
    printf("�Է����ּ���");
    scanf("%d",&x);

    if(x>100)
    {
        printf("100�̻��Դϴ�.");
        if (x>200)
            printf("200�̻��Դϴ�.");

        else
        {
            printf("200�̻��� �ƴմϴ�");
        }
        
    }
    else 
        printf("100�̻��̾ƴմϴ�.");

    return 0;


}
    