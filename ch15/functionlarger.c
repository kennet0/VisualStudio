#include <stdio.h>

void main(){
    int x,y,check;
    printf("�ΰ��� ������ �Է��ϼ���");
    scanf("%d %d",&x,&y);
    printf("%d�� ��Ů�ϴ�",larger(x,y));


}

int larger(int x, int y){

    if (x>y)
        return (x);
    else
        return (y);

}
