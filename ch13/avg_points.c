#include <stdio.h>

void main(){

    int score[10];
    int sum=0;
    int i;
    double average;

    for (i=0; i<10;i++){

        printf("°ÔÀÓ %d¿¡¼­ µæÁ¡Àº?", i+1);
        scanf("%d", &score[i]);
    }
    for (i=0 ; i<10 ; i++)
        sum += score[i];

    average = ((double)sum/i);

   

    printf ("Æò±ÕµæÁ¡Àº %.2f ÀÔ´Ï´Ù.\n", average);


    


}