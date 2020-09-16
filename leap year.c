#include<stdio.h>

    int  main(){
    int year;
    printf("Insert Year to know this leap year\n");
    scanf("%d",&year);

    if(year%4==0){
    printf("Yeah! You selected %d is a leap year",year);
    }

    else if(year%400==0){
    printf("Yeah! You selected %d is a leap year",year);
    }

    else if(year%100==0){
    printf("Yeah! You selected %d is a leap year",year);
    }

    else{
        printf("Oh! Shit your selected %d is not a leap year",year);
    }

    return 0;
    }


    /* Algrithm If you want leap year you should reminder your number with 4,400,100 */

