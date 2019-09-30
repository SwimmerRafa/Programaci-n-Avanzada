#include<stdio.h>

int digits(int i){
    printf("%d", i % 1000);
}

int main(){
    int n = scanf("%d", &n);
    digits(n);
}
