#include<stdio.h>

int palindrobits (int n){
    int reversed = 0;
    int aux = n;
    while (aux > 0){
        reversed = (reversed << 1) | (aux & 1);
        aux = aux >> 1;
    }
    return (reversed == n) ? 1 : 0;
}

int main(){
    int num;
    scanf("%i", &num);
    printf("%i",palindrobits(num));
}