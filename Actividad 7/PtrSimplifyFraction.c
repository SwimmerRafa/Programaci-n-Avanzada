#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>

typedef struct {
    int numerator;
    int denominator;
}fraction;  

int gcd(int n, int m){
    int gcd, remainder;

    while (n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }
    gcd = m;

    return gcd;
}

fraction* simpliFyFraction (const fraction* const frPtr){
    int num, denom;

    fraction* fr1 = malloc(sizeof(fraction));

    fr1->numerator = frPtr->numerator / gcd(frPtr->numerator, frPtr->denominator);
    fr1->denominator = frPtr->denominator / gcd(frPtr->numerator, frPtr->denominator);

    return fr1;
}

int main(){
    fraction* frac = malloc(sizeof(fraction));

    int num1;
    scanf("%d", &num1);
    int num2;
    scanf("%d", &num2);
    
    frac->numerator = num1;
    frac->denominator = num2;
    
    fraction * result = simpliFyFraction(frac);
    printf("%i\n%i", result->numerator, result->denominator);
    free(frac);
    free(result);
}