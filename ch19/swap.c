//���������� ȣ�� (call by reference)
//��������ȣ�� (call by value)


#include <stdio.h>

void swap(int *p1, int *p2);

void main(){
    int a= 3, b= 4;
    swap(&a,&b);
    printf("a=%d b=%d",a,b);

}
void swap(int *p1, int *p2){
    //p1<-a�� �ּҰ�
    //*p1 <- p1�� ����Ű�� ������ ��
    int c;

    c=*p1;
    *p1=*p2;
    *p2=c;

}