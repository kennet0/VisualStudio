//���������� ���α׷�
//����=1 ����=2 ��=3
//��ǻ�� �������� �̰���� ������ ����ϴ� ���α׷�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ss 1
#define ro 2
#define pa 3

void printline();

void main(){

    srand(time(NULL));
    int com,i,money, bet=0;

    printf("�载�⾾ ������ �ڻ��� �Է��ϼ���");
    scanf("%d",&money);
    printline();
       
    for(;;){
        printf("������ �ݾ��� �Է��ϼ���");
        scanf("%d",&bet);
        
        com = rand()%3+1;
        printf("����������!");
        scanf("%d",&i);
       
              

    if ((i==ss && com==ro) ||(i==ro && com==pa)||(i==pa && com==ss))
        {printf ("!!���̽��ϴ�!!\n"); 
        money-=bet;
        printf("���� �ڻ�%d\n",money);
        }
       else if ((i==ss && com==pa) ||(i==ro && com==ss)||(i==pa && com==ro))
            {
            printf("!!�����ؿ�~�̱�̽��ϴ�!!\n"); 
            money+=(bet*2);
            printf("���� �ڻ�%d\n",money);
            }
            else if ((i==ss && com==ss) ||(i==ro && com==ro)||(i==pa && com==pa))
               { printf("!!���̽��ϴ�.!!\n");
                printf("���� �ڻ�%d\n",money);}

        
        if (com==1)
             {printf("��ǻ�ʹ� ����\n");
             printline();} 
        else if (com==2)
            { printf("��ǻ�ʹ� ����\n");
             printline(); }
        else 
             {printf("��ǻ�ʹ� ��\n");
             printline(); }
                    
           
    }
    printf("�Ļ��ϼ̽��ϴ�\n");

}

void printline(){

    printf("-------------------------------\n");
}
