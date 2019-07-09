#include <stdio.h>

struct square{
        int x;
        int y;
};

void main(){

    
    
    struct square nemo, nemo2;

    nemo.x=10;
    nemo.y=20;

    nemo2.x=30;
    nemo2.y=40;


    printf("%d %d\n",nemo.x,nemo.y);
    printf("%d %d",nemo2.x,nemo2.y);
   
   
    
  
}