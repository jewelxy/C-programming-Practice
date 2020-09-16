#include<stdio.h>
int main()
{
    int noDays,Years,Month,Weeks,Days;
    printf("Insert number of days\n");
    scanf("%d",&noDays);

    Years = noDays/365;
    Month = noDays/30;
    Weeks = (noDays%365)/7;
    Days = (noDays%365)%7;

    printf(" Years = %d\n Month = %d\n Week = %d\n Days= %d",Years,Month,Weeks,Days);

    return 0;
}
