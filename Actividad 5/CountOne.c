#include<stdio.h>

int count (int n){
    int i;
    for(i = 0; n != 0; n >>=1){
        if (n & 1){
            i++;
        }
    }
    return i;
}

int main(){
    int num;
    scanf("%i", &num);
    printf("%i",count(num));
}