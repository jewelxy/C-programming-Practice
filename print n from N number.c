#include<stdio.h>
int main()
{
    int stratvalue,end,num;
    printf("Insert Strating value\n");
    scanf("%d",&stratvalue);

    printf("Insert end value\n");
    scanf("%d",&end);

      printf("The series is following\n");

    for(num=stratvalue;num<=end;num++){

        printf("%d\n",num);
    }


    return 0;
}
