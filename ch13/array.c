#include <stdio.h>

void main(){

    int a[10];
    int i;
    // a[0]=1;
    // a[1]=2;
    // a[2]=3;
    // a[3]=4;
    // a[4]=5;

    for(i=2; i<10; i++){
        if (i%2==0)
        a[i]=i+1;
    }
    for(i=2; i<10; i++){
         if (i%2==0)
        //  printf("%d",i);
           printf("%d\n",a[i]);
    }


    // printf("%d\n",a[0]);
    // printf("%d\n",a[1]);
    // printf("%d\n",a[2]);
    // printf("%d\n",a[3]);
    // printf("%d\n",a[4]);


}