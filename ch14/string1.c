#include <Stdio.h>

void main(){

    int i=0;
    char str[4]={'a','b','c','\0'};
    char str1[4]="abc";
    char str2[] ="Hello";

    
    // i = 0;
    //  while (str[i] !='\0'){
    //      printf("%c\n",str[i]);
    //      i++;
    //  }
    
    // for (int i=0; ;i++){
    //     if(str1[i]=='\0') break;
    //     printf("%c\n",str1[i]);}

    while (str2[i] !='\0'){
        i++;
    }


    printf("%d",i+1);
 
}
    

