


#include <stdio.h>

void main(){

    int score[8];
    int i, max, min, sum=0, event_average,average;

    for (i=0;i<8;i++){
        printf("%d�� ������ ������\n",i+1);
        scanf("%d",&score[i]);
    }

    max = score[0];

    for (i=1; i<8;i++)
        if (max<score[i])
            max=score[i];


    min = score[0];                

    for (i=1; i<8;i++)
        if (min>score[i])
            min=score[i];

 

    for (i=0; i<8; i++)
        sum+=score[i];

   


       event_average = (sum-min-max)/6;
       average= sum/i;

    printf("��������� %d�� �Դϴ�\n",average);
    printf("Ư����������� %d�� �Դϴ�\n",event_average);

    if (event_average>150)
        printf("�����߾��");
        else if (event_average>=100)
            printf("���߾��");
            else
                printf("����ϼ���");

   
            
    

}
