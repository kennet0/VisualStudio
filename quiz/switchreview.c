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
            printf("작은수입니다");
            break;
        case 4:
        case 5:
        case 6:
            printf("적당한수 입니다");
            break;
        default:
            printf("관심 없습니다");

            break;
        }
    }



}