#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int choice;
    while(1){
    printf("What is your job title?(-1 to end):");
    scanf("%d", &choice);
    if(choice==-1)
    {
        break;
    }
    
    switch (choice) 
    {
        case 1: 
        {
            float week;
            printf("Fixed weekly salary: ");
            scanf("%f", &week);
            printf("%.2f dollars\n", week);
            break;
        }
        case 2: 
        {
            float hr;
            double hr_money;
            double hourpeople;

            printf("working hour: ");
            scanf("%f", &hr);
            printf("Fixed hourly wage: ");
            scanf("%lf", &hr_money);

            if (hr <= 40) 
            {
                hourpeople = hr * hr_money;
            }
            else 
            {
                hourpeople = (40 * hr_money) + ((hr - 40) * hr_money * 1.5);
            }

            printf("%.2f dollars\n", hourpeople);
            break;
        }
        case 3: 
        {
            float sales;
            printf("Total Weekly Sales: ");
            scanf("%f", &sales);
            double commission = 250.0 + (sales * 0.057);
            printf("%.2f dollars\n", commission);
            break;
        }
        case 4: 
        {
            float product_money;
            printf("Unit price of the product: ");
            scanf("%f", &product_money);
            float product_amount;
            printf("Product Quantity: ");
            scanf("%f", &product_amount);
            float Piece_rate = product_money * product_amount;
            printf("%.2f dollars\n", Piece_rate);
            break;
        }
        default:
            printf("Invalid paycode.\n");
            break;
    }
    }
    return 0;
}