#include<stdio.h>


int circularRightShift(unsigned int n, unsigned int d) { 
   for(int i = 0; i<d; i++){
        unsigned int first = 1 & n;
        unsigned int last = first <<31;
        n >>= 1;
        n |= last;
    }

    return n; 
}

int main(){
    int num1, num2;
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    printf("%d", circularRightShift(num1,num2)); 
}