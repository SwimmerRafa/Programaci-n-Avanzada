#include<stdio.h>

void printRange(int n1, int n2){
    if(n1 < n2){
        for(int i = n1; i <= n2; i++){
            printf("%i ", i);
        }
    }
    else if(n1 > n2){
        for(int i = n1; i >= n2; i--){
            printf("%i ", i);
        }
    }
    else{
        printf("%i", n1);
    }
}

int main(){
    int num1, num2;
    scanf("%i", &num1);
    scanf("%i", &num2);
    printRange(num1, num2);
}