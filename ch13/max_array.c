//�迭�� 10�� ���� ���� �ִ밪�� ã�°�
//�迭��  ���� ������ �̿��Ͽ� ����.



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    srand(time(NULL));

    int array[10];
    int i,max, min ;

    for (i=0;i<10;i++){
        array[i]=rand()%100+1;
        // printf ("%d\n", array[i]);
        // if (array[i]> array[i])
        //     printf("%d",array[i]);
    }

    max = array[0];

    for(i=1 ; i<10; i++){
        if (max<array[i])
            max=array[i];
    }

    printf("�ִ밪��%d\n", max);

    for(i=0 ;i<10;i++)
        printf("%d\n",array[i]);
        
     min = array[0];

    for(i=1 ; i<10; i++){
        if (max>array[i])
            max=array[i];
    }

    printf("�ּҰ���%d\n", max);

}

   