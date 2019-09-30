#include<stdio.h>

void countFactors (int n){
    int cont = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }
    printf("%i", cont);
}

int main(){
    int num;
    scanf("%i", &num);
    countFactors(num);
}