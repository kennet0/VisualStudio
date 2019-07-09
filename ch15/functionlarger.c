#include <stdio.h>

void main(){
    int x,y,check;
    printf("두개의 정수를 입력하세요");
    scanf("%d %d",&x,&y);
    printf("%d가 더큽니다",larger(x,y));


}

int larger(int x, int y){

    if (x>y)
        return (x);
    else
        return (y);

}
