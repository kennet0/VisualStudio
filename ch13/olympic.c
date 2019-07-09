


#include <stdio.h>

void main(){

    int score[8];
    int i, max, min, sum=0, event_average,average;

    for (i=0;i<8;i++){
        printf("%d번 심판의 점수는\n",i+1);
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

    printf("점수평균은 %d점 입니다\n",average);
    printf("특수점수평균은 %d점 입니다\n",event_average);

    if (event_average>150)
        printf("참잘했어요");
        else if (event_average>=100)
            printf("잘했어요");
            else
                printf("노력하세요");

   
            
    

}
