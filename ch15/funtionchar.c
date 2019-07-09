#include <stdio.h>
void repeat(int c, int n);

void main(){

    char c;
    int n;
   
    printf("반복할 캐릭터와 갯수를 입력하세요");
    scanf("%c %d",&c,&n);
    repeat(c,n);


}   

void repeat(char c, int n){

    int i;
    for (i=0;i<n;i++)
            printf("%c",c);
}