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
      
    
   

        printf("�ݺ���Ƚ���� �Է��ϼ���");
        scanf("%d",&input_count);

        printf("���� ������ �Է����ּ���");
        scanf("%d %d",&num_min,&num_max);

    
    num=rand()%((num_max +1)-num_min)+ num_min;
    
            
    do{
        printf("���ڸ� �Է��Ͽ� �ּ���.");
        scanf("%d",&i);
        count++;
                       
        
    if (i>num)
        printf("�Էµȼ����� �۽��ϴ�\n"); 
    else if (i<num)
        printf("�Էµȼ����� Ů�ϴ�\n");
        
        
     } while ((i!= num) && (count<input_count));
      
    
    if (i != num)
        printf("�����Դϴ�");
    
    else
         printf("�����Դϴ�");
  
   

  

    return 0;

   
}