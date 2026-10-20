#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int j=1;
    for (int i = 4; i >= 0; i--){
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int k = 0 ; k < j ; k++) {
            printf("*");
        }
        j+= 2;
        printf("\n");
    }
    j -= 4;
    for (int i = 1;i < 5 ;i++) {
        for (int s = 0;s < i;s++) {
            printf(" ");
        }
        for (int k = 0; k < j;k++) {
            printf("*");
        }
        j -= 2;
        printf("\n");
    }
    return 0;
}