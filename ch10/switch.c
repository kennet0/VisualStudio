#include <stdio.h>

int main(void)

{
    int input;
    printf ("���ڸ� �Է����ּ���:");
    scanf("%d",&input);

    switch (input)
    {
    case 0 : printf("�Էµȼ��ڴ� 0 �Դϴ�.");
            break;       
    case 1 : printf("�Էµȼ��ڴ� 1 �Դϴ�.");
            break;       ;
    case 2 :  printf("�Էµȼ��ڴ� 2 �Դϴ�.");
            break;       
    default : printf("�ٽ� �Է��� �ּ���");
            break;
       
    } 
    return 0;
}