#include<stdio.h>
#include<math.h>
int main(void) {
	double p=5000;
    double rate;
    double amount;
	int year = 15;
    int i;
    int count;
	for (count=0;count<=4;count++) 
    {
		rate = 0.10 + count * 0.005;
		printf("rate = %.2f%%\n",rate*100);
		for (i = 1; i <= year;i++) 
        {
			amount = p * pow(1 + rate, i);
			printf("year = %d,amount = %lf\n", i, amount);
		}
		
	}
    return 0;
}