#include<stdio.h>

int gcd1(int x,int y){
    int temp, gcd;
    while (y != 0){
      temp = y;
      y = x % y;
      x = temp;
    }
    gcd = x;
    return gcd;
}

int gcd (int n){
    if(n > 1000000 || n<=0){
        return 0;
    }
    int result = 0;
    for(int i = 1; i <= n; i++){
        if(gcd1(n,i)==1){
            result++;
        }
    }
    return result;
}

int main(){
    int num;
    scanf("%i", &num);
    printf("%i", gcd(num));
}