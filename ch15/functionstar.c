#include <stdio.h>



void main(){


    int num;
    printf("�ݺ�Ƚ�� �Է�");
    scanf("%d,",&num);


    printstar(num);
    printstar(num);

    
}


void printstar(int num){
    int i;

    for(i=1;i<=num;i++)
    {
        printf("*\n");
    }
}
      