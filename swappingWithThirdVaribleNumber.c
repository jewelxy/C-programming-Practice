#include<stdio.h>
int main(){

        int x,y,z;
        printf("Insert first variable for swap\n",x);
    scanf("%d",&x);

        printf("Insert second variable for swap\n",y);
    scanf("%d",&y);

        z=x;
        x=y;
        y=z;

        printf("After swapped first variable = %d\n",x);
        printf("After swapped second variable = %d\n",y);


}
