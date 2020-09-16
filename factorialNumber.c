#include<stdio.h>

    int main(){
        int i,num,fact=1;

        printf("Insert a number for factorial\n");
        scanf("%d",&num);

        for(i=1;i<=num;i++){
            fact = fact*i;
        }

        printf("%d ! = %d",num,fact);

        return 0;


    }
