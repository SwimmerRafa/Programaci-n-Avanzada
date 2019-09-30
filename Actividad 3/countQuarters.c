#include<stdio.h>

void countQuarters(int cents){
    cents = cents % 100;
    printf("%i", cents / 25);
}

int main(){
    int c;
    scanf("%i", &c);
    countQuarters(c);
}