// �Լ��� ���弼�� PARAMETER�� 1~3 �� ���� �޾Ƽ�
// 1: �ȳ��ϼ���
// 2: �ݰ����ϴ�
// 3: ����մϴ�
// ��ȯ���� ������(void)
// ���� 

#include <stdio.h>
void helloprint(int num);
void main(){
    int num;

    // scanf("%d",&num);
    
    helloprint(1);
    helloprint(2);
    helloprint(3);
   
    
}
void helloprint(int num){
    
    if(num==1)
        printf("%d �ȳ��ϼ���\n", num);
    else if(num==2)
        printf("%d �ݰ����ϴ�\n", num);
        else
            printf("%d ����մϴ�\n", num); 




}


