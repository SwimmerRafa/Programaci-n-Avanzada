#include<stdio.h>

int fourIntOne(unsigned int a, unsigned int b, unsigned int c, unsigned int d){
    int number = a | ((b << 8) | (c << 16) | (d << 24));

    return number;
}

int main(){
    unsigned int  a, b, c, d;
    scanf("%u\n", &a);
    scanf("%u\n", &b);
    scanf("%u\n", &c);
    scanf("%u", &d);

    printf("%u", fourIntOne(a, b, c, d));
}