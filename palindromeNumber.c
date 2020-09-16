#include<stdio.h>

    int main(){
        int i,x,n,rev=0,theNumber;
        printf("Insert a number to check palindrome\n");
        scanf("%d",&n);

        theNumber=n;
        while(n>0){
            x=n%10;
            rev = rev*10 + x;
            n=n/10;
        }

        printf("After reverse the number is %d\n",rev);

        if(theNumber==rev){
            printf("The inserted number %d is palindrome\n",theNumber);
        }else{
            printf("The inserted number %d is not palindrome\n",theNumber);
        }
        return 0;
    }
