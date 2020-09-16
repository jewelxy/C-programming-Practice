#include<stdio.h>

    int main(){

        int a,b,mul=0,i;
        printf("Insert the value of assign first value A\n");
        scanf("%d",&a);

        printf("Insert the value of assign second value B\n");
        scanf("%d",&b);

        for(i=1;i<=b;i++){

            mul= mul+a;

        }
        printf("Mulpicatin Result is %d",mul);
        return 0;

    }
