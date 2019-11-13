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

fraction * sumFraction (const fraction * const frac1, const fraction * const frac2){
    fraction * ptrSumFrac = malloc(sizeof(fraction));
    fraction * ptrGCD = malloc(sizeof(fraction));

    ptrSumFrac->numerator = (frac1->numerator * (frac2->denominator) + (frac2->numerator * frac1->denominator));
    ptrSumFrac->denominator = frac1->denominator * frac2->denominator;

    ptrGCD->numerator = ptrSumFrac->numerator / gcd(ptrSumFrac->numerator, ptrSumFrac->denominator);
    ptrGCD->denominator = ptrSumFrac->denominator / gcd(ptrSumFrac->numerator, ptrSumFrac->denominator);
    
    free(ptrSumFrac);
    return ptrGCD;

}

int main(){
    fraction* frac = malloc(sizeof(fraction));
    fraction* frac2 = malloc(sizeof(fraction));
    
    int n1, n2, n3, n4;
    scanf("%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4);

    frac->numerator = n1;
    frac->denominator = n2;
    frac2->numerator = n3;
    frac2->denominator = n4;

    fraction * result = sumFraction(frac, frac2);

    printf("%d\n%d", result->numerator, result->denominator);
    free(frac);
    free(frac2);
    free(result);
}
