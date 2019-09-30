#include<stdio.h>

void showTwos (int n){
    printf("%i = ", n);
    while(n % 2 == 0){
        printf("2 * ");
        n /= 2;
    }
    printf("%i", n);
}

int main(){
    int num;
    scanf("%i",&num);
    showTwos(num);
}