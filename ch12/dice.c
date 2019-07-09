#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{   
    int dice,count;
    srand(time(NULL));
    
    

    int i, one,two,three,four,five,six;

for (;;){
    printf ("반복횟수 입력");
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

        printf("1의확률은%f입니다\n",(float)one/count*100);
        printf("2의확률은%f입니다\n",(float)two/count*100);
        printf("3의확률은%f입니다\n",(float)three/count*100);
        printf("4의확률은%f입니다\n",(float)four/count*100);
        printf("5의확률은%f입니다\n",(float)five/count*100);
        printf("6의확률은%f입니다\n",(float)six/count*100);

}
    


    return 0;

}