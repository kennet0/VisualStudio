//1.두수를 입력받아서 더하는 프로그램
//2.성공시 더하는 부분을 함수로 만들어서 사용
//ex>예 메인함수에 add(3,4)

#include <stdio.h>

int main(){

    int x,y,sum;
    printf("두수를 입력하세요");
    scanf("%d %d",&x,&y);
    sum =add(x,y);
        printf("%d\n",sum);
    sum =sub(x,y);
        printf("%d\n",sum);
    sum =mul(x,y);
        printf("%d\n",sum);
    sum =div(x,y);
        printf("%d\n",sum);
    sum =rest(x,y);
        printf("%d\n",sum);
       

    return 0;
}

int add(int x ,int y){
    return x+y;
}

int sub(int x ,int y){
    return x-y;
}

int mul(int x, int y){
    return x*y;
}

int div(int x ,int y){
    return x/y;
}

int rest(int x ,int y){
    return x%y;
}

