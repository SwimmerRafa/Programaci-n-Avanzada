#include<stdio.h>
#include <math.h>

void printPowersOf2 (int number){
    for(int i = 0; i <= number; i++){
        printf("%i ", (int)pow(2, i));
    }
}

int main(){
    int n;
    scanf("%i", &n);
    printPowersOf2(n);
}           