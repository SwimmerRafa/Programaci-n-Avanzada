#include<stdio.h>
#include <math.h>

void printPoersOfN(int base, int exponent){
    for(int i = 0; i <= exponent; i++){
        printf("%i ", (int)pow(base, i));
    }
}

int main(){
    int b;
    scanf("%i\n", &b);
    int e;
    scanf("%i", &e);

    printPoersOfN(b, e);
}