#include <stdio.h>
int main(void){
    int length;
    int breadth;

    printf("Enter length:");
    scanf("%d",&length);
    printf("Enter breadth:");
    scanf("%d",&breadth);

    for(int i=0;i<length;i++)
    {
        for(int j=0;j<breadth;j++)
        {
            if((i==0)||(i==length-1)||(j==0)||(j==breadth-1))
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
           
        } 
        printf("\n");
    }
    return 0;
}
