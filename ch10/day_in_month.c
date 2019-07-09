#include <stdio.h>

int main(void)

{
    int input ;
    printf ("달을 입력하시오:");
    scanf("%d",&input);

    if (input >=1 && input <=12){

    switch (input)
    {
    case 1 :  
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
            printf("%d월의 일수는 31일 입니다\n", input);
            break;       
    case 4 :
    case 6 :
    case 9 :
    case 11 :
            printf("%d월의 일수는 30일 입니다\n", input);
            break;  
           
    
    case 2 :
            printf("%d월의 일수는 28일 입니다\n", input);
            break;  
    }}

    else
    {
        printf("다시입력하세요");
    }        
                     
    return 0;
}