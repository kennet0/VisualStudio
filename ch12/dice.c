#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{   
    int dice,count;
    srand(time(NULL));
    
    

    int i, one,two,three,four,five,six;

for (;;){
    printf ("�ݺ�Ƚ�� �Է�");
    scanf("%d",&count);

    one=0,two=0,three=0,four=0,five=0,six=0;

      
    for (i=0; i<count; i++){
        dice = rand()%6+1;
        switch (dice)
        {
        case 1 :one++; break;
        case 2 :two++; break;
        case 3 :three++; break;
        case 4 :four++; break;
        case 5 :five++; break;
        case 6 :six++; break;
                
        }
    }

        printf("1��Ȯ����%f�Դϴ�\n",(float)one/count*100);
        printf("2��Ȯ����%f�Դϴ�\n",(float)two/count*100);
        printf("3��Ȯ����%f�Դϴ�\n",(float)three/count*100);
        printf("4��Ȯ����%f�Դϴ�\n",(float)four/count*100);
        printf("5��Ȯ����%f�Դϴ�\n",(float)five/count*100);
        printf("6��Ȯ����%f�Դϴ�\n",(float)six/count*100);

}
    


    return 0;

}