#include <stdio.h>

void main(){
    int i,j=0,sum;

    

    

    for(;;){
        scanf("%d",&i);
        sum= i-j;

        switch (sum)
        {
        case 1:
        case 2:
        case 3:
            printf("�������Դϴ�");
            break;
        case 4:
        case 5:
        case 6:
            printf("�����Ѽ� �Դϴ�");
            break;
        default:
            printf("���� �����ϴ�");

            break;
        }
    }



}