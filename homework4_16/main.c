#include <stdio.h>
void A(int row){
    for(int i=0;i<=row;i++)
    {
        printf("%s","*");
    }
    for(int i=0;i<10-row;i++)
    {
        printf("%s"," ");
    }
}
void B(int row){
    for(int i=0;i<10-row;i++)
    {
        printf("%s","*");
    }
    for(int i=0;i<row;i++)
    {
        printf("%s"," ");
    }
}
void C(int row){
    for(int i=0;i<row;i++)
    {
        printf("%s"," ");
    }
    for(int i=0;i<10-row;i++)
    {
        printf("%s","*");
    }
}
void D(int row){
    for(int i=0;i<10-row;i++)
    {
        printf("%s"," ");
    }
    for(int i=0;i<=row;i++)
    {
        printf("%s","*");
    }
}
int main(void){
    printf("(A)\t\t(B)\t\t(C)\t\t(D)\n");
    for(int row=0;row<10;row++)
    {
        A(row);
        printf("\t");
        B(row);
        printf("\t");
        C(row);
        printf("\t");
        D(row);
        printf("\n");
    }
    return 0;
}
