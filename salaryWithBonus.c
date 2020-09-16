#include<stdio.h>

    int main(){

    float salary,bonous;
    char gender;
        printf("Insert Employee Gender\n");
        scanf("%c",&gender);

        printf("Enter Salary\n");
        scanf("%f",&salary);

        //For Male Workers

            if(gender=='M' || gender=='m'){
                if(salary>10000){
                    bonous=(float)(salary*0.05);//0.05--5%
                }else{
                    bonous=(float)(salary*0.07); //0.05--2%
                }
            }


        //For Female Workers

            if(gender=='F' || gender=='f'){
                if(salary>10000){
                    bonous=(float)(salary*0.01);//0.01--10%
                }else{
                    bonous=(float)(salary*0.12); //0.05--2%
                }
            }

            salary+=bonous;
            printf("Bonus= %.2f\ Salary= %.2f\n",bonous,salary);

        return 0;
    }
