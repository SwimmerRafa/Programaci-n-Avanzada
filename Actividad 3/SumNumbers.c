#include<stdio.h>

void sum (int low, int high){
    int result = 0;
    for(int i = low; i <= high; i++){
        result += i;
    }
    printf("%i", result);
}

int main(){
    int m, n;
    printf("low? ");
    scanf("%i", &m);
    printf("high? ");
    scanf("%i", &n);
    printf("sum = ");
    sum(m, n);
}