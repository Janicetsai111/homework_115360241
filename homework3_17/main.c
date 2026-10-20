#include <stdio.h>
int main(void){
    int account;
    double beginning_balance;
    double total_charges;
    double total_credits;
    double credit_limit;
    double new_balance;

    while(1){
    printf("Enter account number (-1 to end):");
    scanf("%d",&account);

    if(account==-1){
        break;
    }
    printf("Enter beginning balance:");
    scanf("%lf",&beginning_balance);
    printf("Enter total charges:");
    scanf("%lf",&total_charges);
    printf("Enter total credits:");
    scanf("%lf",&total_credits);
    printf("Enter credit limit:");
    scanf("%lf",&credit_limit);
   

    new_balance=beginning_balance+total_charges-total_credits;
    
    if(new_balance>credit_limit)
    {
        printf("Account:\t%d\n",account);
        printf("Credit Limit:\t%.2f\n",credit_limit);
        printf("Balance:\t%.2f\n",new_balance);
        printf("Credit Limit Exceeded.\n");
    }
    printf("\n");
    }
    return 0;
}