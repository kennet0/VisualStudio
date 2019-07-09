#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    // srand(time(NULL));
    int com,me;

    printf("숫자 야구게임입니다.\n");
       

    for(;;){
        
        printf("숫자를 입력하세요\n");
        scanf("%d", &me);

        // com=rand()%1000;
        com=123;
        printf("컴퓨터는 %d\n" ,com);

        if (me==com)
            printf("홈런입니다\n");
            
            // else if((me%100==com%100)||(me%1000/10==com%1000/10)){
            //     printf("2스트라이크\n");

            // }
            
    
            
            else if((me%10==com%10)&&(me%100/10==com%100/10)||(me%1000/100==com%1000/100)){
                printf("2스트라이크\n");  
    
            }
            else if((me%10==com%10)||(me%100/10==com%100/10)&&(me%1000/100==com%1000/100)){
                printf("2스트라이크\n");  
    
            }
            else if((me%10==com%10)||(me%100/10==com%100/10)||(me%1000/100==com%1000/100)){
                printf("1스트라이크\n");  
            }
            else if(((me%100)/10==com%10)||(me%10==(com%100)/10)||((me%1000)/100==com%100)||(me%100==(com%1000)/100)){
                printf("1볼\n");
            }
          
    }




}


