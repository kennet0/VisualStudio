#include <stdio.h>

int main(void){

    int i,n,count=0;
    printf("수를 입력하세요");
    scanf("%d",&n);

    for (i=1; n>=i; i++){
        if((n%i)==0)
            {printf("%d\n", i);
            count++;}
        }
        

    printf("약수의갯수는 %d개",count);
    return 0;
}