//숫자를 입력받아서 소수인지 아닌지 판단하는 프래그램을 만들어라
//단 소수확인은 함수를 만들어서 확인 리턴값 (0:소수 ,1:소수아님)


#include <stdio.h>

int primech(int input);
void printline();

int main(){
    int input, check;
    printline();
    printf("숫자를 입력하세요");
    scanf("%d",&input);
    check=primech(input);
    if (check == 0)
        printf("소수\n");
    else 
        printf("소수아님\n");
    printline();
}
        
int primech(int input){
    int i;
    for(i=2;i<input;i++){
       
        if (input%i==0)
                break;
    }
    if(i==input) return 0;
    else return -1;          
}

void printline(){

    printf("--------------------\n");
}

