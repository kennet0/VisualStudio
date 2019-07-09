#include <stdio.h>

void main(){
    int s[3][5] ={{30,20,10,40,50},
                  {50,10,10,30,70},
                  {60,20,10,40,90}}; //15개의 변수
    //s[3] ={1,2,3}
int i,j;

   for(i=0;i<3;i++)
   {
       for(j=0;j<5;j++)
       {
           printf("s[%d][%d]=%d\n",i,j,s[i][j]);
       }
   }




}