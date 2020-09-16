#include<stdio.h>

    int main(){

    int i,n,x,sum=0;
    scanf("%d",&n);

        while(n>0){
            x = n%10;
            sum = sum*10+x;  //for reverse number of given number
           // sum = sum + x;     //for sum digit of all given number
            n=n/10;
        }

        //printf("The sum is %d\n",sum); //for reverse number of given number
        printf("The rev is %d\n",sum);

        return 0;
    }
