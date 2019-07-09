//삼각형의 넓이를 구하는 프로그램을 만드시요
// 밑변과 높이를 입력받아서.

#include <stdio.h>

int main(void)

{
    int customer, price, change;

    printf("고객으로부터 받은돈\n");
    scanf("%d", &customer);

    printf("물건값\n");
    scanf("%d", &price);

    change = customer - price ;

    printf("오천원 : %d \n", change/5000);
    printf("천원 :%d \n", (change % 5000) /1000);
    printf("오백원 : %d \n", (change % 5000 %1000)/500);
    printf("백원 :%d \n", (change % 5000 %1000 %500)/100);
    printf("오십원 :%d \n", (change % 5000 %1000 %500 %100)/50);
    printf("십원 : %d \n", (change % 5000 %1000% 500% 100% 50)/10);


    
    return 0;
}