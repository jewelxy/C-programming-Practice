#include<stdio.h>
int main(){

    int a,b,c;

    printf("Insert the value of a\n");
    scanf("%d/n",&a);

     printf("Insert the value of b\n");
    scanf("%d/n",&b);

     printf("Insert the value of c \n");
    scanf("%d",&c);

    if(a>b&&a>c){
        printf("Among of them The Bigest number is a = %d ",a);
    }

    else if(b>a&&b>c){
        printf("Among of them The Bigest number is b = %d ",b);
    }
    else{
        printf("Among of them The Bigest number is c = %d ",c);
    }

    return 0;
       }
