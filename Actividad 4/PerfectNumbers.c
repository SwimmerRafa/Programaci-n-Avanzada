#include<stdio.h>

void perfectNumbers(int max) {
    int sum = 0;
    for (int i = 1; i <= max; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        } 
        if (sum == i) {
            printf("%d ", sum);
        }    
    }
    printf("\n");
}


int main(){
    int n;
    scanf("%d", &n);
    printf("Perfect numbers up to %d: " , n);
    perfectNumbers(n);
}

