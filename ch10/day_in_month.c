#include <stdio.h>

int main(void)

{
    int input ;
    printf ("���� �Է��Ͻÿ�:");
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
            printf("%d���� �ϼ��� 31�� �Դϴ�\n", input);
            break;       
    case 4 :
    case 6 :
    case 9 :
    case 11 :
            printf("%d���� �ϼ��� 30�� �Դϴ�\n", input);
            break;  
           
    
    case 2 :
            printf("%d���� �ϼ��� 28�� �Դϴ�\n", input);
            break;  
    }}

    else
    {
        printf("�ٽ��Է��ϼ���");
    }        
                     
    return 0;
}