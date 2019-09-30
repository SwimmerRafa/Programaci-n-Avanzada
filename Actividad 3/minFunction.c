#include<stdio.h>

int min (int a, int b, int c){
    int min;
    min= (a<=b && a <= c ? a : min);
    min= (b<=a && b <= c ? b : min);
    min= (c<=a && c <= b ? c : min);
    return min;
    }

int main(){
    int x;
    scanf("%i\n", &x);  
    int y;
    scanf("%i\n", &y);
    int z;
    scanf("%i", &z);

    printf("%i", min(x, y, z));
}