#include <stdio.h>
int main(void){
    float principal;
    float rate;
    int day;
    float interest;

    while(1)
    {
        printf("Enter loan principal (-1 to end):");
        scanf("%f",&principal);
        if(principal==-1)
        {
        break;
        }
        printf("Enter interest rate:");
        scanf("%f",&rate);
        printf("Enter term of the loan in days:");
        scanf("%d",&day);

        interest=principal*rate*day/365;

        printf("The interest charge is $%.2f\n",interest);
        printf("\n");
    }
    
    return 0;
}