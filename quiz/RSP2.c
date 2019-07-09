//가위바위보 프로그램
//가위=1 바위=2 보=3
//컴퓨터 랜덤으로 이겼는지 졌는지 출력하는 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ss 1
#define ro 2
#define pa 3

void printline();

void main(){

    srand(time(NULL));
    int com,me,money, bet=0;

    // printf("김슬기씨 본인의 자산을 입력하세요");
    // scanf("%d",&money);
    // printline();
       
    for(;;){
        // printf("베팅할 금액을 입력하세요");
        // scanf("%d",&bet);
        
        com = rand()%3+1;
        printf("가위바위보!");
        scanf("%d",&me);
       
              

    if ((me==ss && com==ro) ||(me==ro && com==pa)||(me==pa && com==ss))
        {printf ("!!지셨습니다!!\n"); 
        money-=bet;
        printf("나의 자산%d\n",money);
        }
       else if ((me==ss && com==pa) ||(me==ro && com==ss)||(me==pa && com==ro))
            {
            printf("!!축하해요~이기셨습니다!!\n"); 
            money+=(bet*2);
            printf("나의 자산%d\n",money);
            }
            else if ((me==ss && com==ss) ||(me==ro && com==ro)||(me==pa && com==pa))
               { printf("!!비기셨습니다.!!\n");
                printf("나의 자산%d\n",money);}

        
        if (com==1)
             {printf("컴퓨터는 가위\n");
             printline();} 
        else if (com==2)
            { printf("컴퓨터는 바위\n");
             printline(); }
        else 
             {printf("컴퓨터는 보\n");
             printline(); }
                    
           
    }
    printf("파산하셨습니다\n");

}

void printline(){

    printf("-------------------------------\n");
}

