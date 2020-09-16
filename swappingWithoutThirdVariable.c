#include<stdio.h>
int main(){

        int x,y;
        printf("Insert first variable for swap\n",x);
    scanf("%d",&x);

        printf("Insert second variable for swap\n",y);
    scanf("%d",&y);

        x=x+y;
        y=x-y;
        x=x-y;


        printf("After swapped first variable = %d\n",x);
        printf("After swapped second variable = %d\n",y);


}
