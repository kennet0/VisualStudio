//���ڸ� �Է¹޾Ƽ� �Ҽ����� �ƴ��� �Ǵ��ϴ� �����׷��� ������
//�� �Ҽ�Ȯ���� �Լ��� ���� Ȯ�� ���ϰ� (0:�Ҽ� ,1:�Ҽ��ƴ�)


#include <stdio.h>

int primech(int input);
void printline();

int main(){
    int input, check;
    printline();
    printf("���ڸ� �Է��ϼ���");
    scanf("%d",&input);
    check=primech(input);
    if (check == 0)
        printf("�Ҽ�\n");
    else 
        printf("�Ҽ��ƴ�\n");
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

