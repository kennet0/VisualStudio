//1.�μ��� �Է¹޾Ƽ� ���ϴ� ���α׷�
//2.������ ���ϴ� �κ��� �Լ��� ���� ���
//ex>�� �����Լ��� add(3,4)

#include <stdio.h>

int main(){

    int x,y,sum;
    printf("�μ��� �Է��ϼ���");
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

