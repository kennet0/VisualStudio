//�ﰢ���� ���̸� ���ϴ� ���α׷��� ����ÿ�
// �غ��� ���̸� �Է¹޾Ƽ�.

#include <stdio.h>

int main(void)

{
    int customer, price, change;

    printf("�����κ��� ������\n");
    scanf("%d", &customer);

    printf("���ǰ�\n");
    scanf("%d", &price);

    change = customer - price ;

    printf("��õ�� : %d \n", change/5000);
    printf("õ�� :%d \n", (change % 5000) /1000);
    printf("����� : %d \n", (change % 5000 %1000)/500);
    printf("��� :%d \n", (change % 5000 %1000 %500)/100);
    printf("���ʿ� :%d \n", (change % 5000 %1000 %500 %100)/50);
    printf("�ʿ� : %d \n", (change % 5000 %1000% 500% 100% 50)/10);


    
    return 0;
}