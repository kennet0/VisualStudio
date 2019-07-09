#include <stdio.h>



void main(){


    int num;
    printf("반복횟수 입력");
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
      