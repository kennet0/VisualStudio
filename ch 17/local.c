// 함수를 만드세요 PARAMETER로 1~3 의 값을 받아서
// 1: 안녕하세요
// 2: 반갑습니다
// 3: 사랑합니다
// 반환값은 미존재(void)
// 사용법 

#include <stdio.h>
void helloprint(int num);
void main(){
    int num;

    // scanf("%d",&num);
    
    helloprint(1);
    helloprint(2);
    helloprint(3);
   
    
}
void helloprint(int num){
    
    if(num==1)
        printf("%d 안녕하세요\n", num);
    else if(num==2)
        printf("%d 반갑습니다\n", num);
        else
            printf("%d 사랑합니다\n", num); 




}


