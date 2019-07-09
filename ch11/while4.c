#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    srand(time(NULL));
    int num;
    
    int i;
    int count=0;
    int input_count;
    int num_min, num_max;
      
    
   

        printf("반복할횟수를 입력하세요");
        scanf("%d",&input_count);

        printf("숫자 범위를 입력해주세요");
        scanf("%d %d",&num_min,&num_max);

    
    num=rand()%((num_max +1)-num_min)+ num_min;
    
            
    do{
        printf("숫자를 입력하여 주세요.");
        scanf("%d",&i);
        count++;
                       
        
    if (i>num)
        printf("입력된수보다 작습니다\n"); 
    else if (i<num)
        printf("입력된수보다 큽니다\n");
        
        
     } while ((i!= num) && (count<input_count));
      
    
    if (i != num)
        printf("오답입니다");
    
    else
         printf("정답입니다");
  
   

  

    return 0;

   
}