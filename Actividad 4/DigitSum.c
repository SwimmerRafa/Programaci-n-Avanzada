#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int digitSum(int n){
    n = abs(n);
    int sum = 0;

    while( n > 0){
        sum += n %10;
        n /= 10;
    }
    return sum;
}

int main(){
    int num;
    scanf("%i", &num);
    printf("%i", digitSum(num));
}