#include <stdio.h>

int main(void){

    int i,n,count=0;
    printf("���� �Է��ϼ���");
    scanf("%d",&n);

    for (i=1; n>=i; i++){
        if((n%i)==0)
            {printf("%d\n", i);
            count++;}
        }
        

    printf("����ǰ����� %d��",count);
    return 0;
}