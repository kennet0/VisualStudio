//배열을 10개 만들어서 그중 최대값을 찾는것
//배열의  값은 랜덤을 이용하여 넣자.



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

    printf("최대값은%d\n", max);

    for(i=0 ;i<10;i++)
        printf("%d\n",array[i]);
        
     min = array[0];

    for(i=1 ; i<10; i++){
        if (max>array[i])
            max=array[i];
    }

    printf("최소값은%d\n", max);

}

   