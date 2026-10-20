#include <stdio.h>
int main(void){
    float sales;
    float salary;

    while(1){
    printf("Enter sales in dollars (-1 to end):");
    scanf("%f",&sales);

    if(sales==-1){
        break;
    }

    salary=sales*0.09+200;

    printf("Salary is: $%.2f\n\n",salary);
    }
    return 0;
}