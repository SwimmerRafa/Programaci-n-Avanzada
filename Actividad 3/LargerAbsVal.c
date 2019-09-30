#include<stdio.h>
#include <stdlib.h>

void largerAbsVal(int m, int n){
    int i = (int)abs(m);
    int j = (int)abs(n);

    if( i < j){
        printf("%i", j);
    }
    else{
        printf("%i", i);
    }
    
}

int main(){
    int a, b;
    scanf("%i\n", &a);
    scanf("%i", &b);
    largerAbsVal(a, b);
}