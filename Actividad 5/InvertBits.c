#include<stdio.h>

int invertBits(unsigned int x, unsigned int p, unsigned int n){
     int mask = 0;
     for(int i = 0; i < n; i++){
         mask <<= 1;
         mask |= 1;
     }
     mask <<= p;
     x ^= mask;

     return x;
}

int main(void){
    int x;
    int p, n;
    scanf("%d\n", &x);
    scanf("%d\n", &p);
    scanf("%d", &n);
    printf("%d",invertBits(x,p,n));
}
