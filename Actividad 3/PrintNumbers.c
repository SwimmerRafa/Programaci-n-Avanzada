#include<stdio.h>

void printNumbers (int n){
    for(int i = 1; i <= n; i++){
        printf("[%i] ", i);
    }
}

int main(){
    int n;
    scanf("%i", &n);
    printNumbers(n);
}