#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    // srand(time(NULL));
    int com,me;

    printf("���� �߱������Դϴ�.\n");
       

    for(;;){
        
        printf("���ڸ� �Է��ϼ���\n");
        scanf("%d", &me);

        // com=rand()%1000;
        com=123;
        printf("��ǻ�ʹ� %d\n" ,com);

        if (me==com)
            printf("Ȩ���Դϴ�\n");
            
            // else if((me%100==com%100)||(me%1000/10==com%1000/10)){
            //     printf("2��Ʈ����ũ\n");

            // }
            
    
            
            else if((me%10==com%10)&&(me%100/10==com%100/10)||(me%1000/100==com%1000/100)){
                printf("2��Ʈ����ũ\n");  
    
            }
            else if((me%10==com%10)||(me%100/10==com%100/10)&&(me%1000/100==com%1000/100)){
                printf("2��Ʈ����ũ\n");  
    
            }
            else if((me%10==com%10)||(me%100/10==com%100/10)||(me%1000/100==com%1000/100)){
                printf("1��Ʈ����ũ\n");  
            }
            else if(((me%100)/10==com%10)||(me%10==(com%100)/10)||((me%1000)/100==com%100)||(me%100==(com%1000)/100)){
                printf("1��\n");
            }
          
    }




}


