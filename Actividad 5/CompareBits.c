#include<stdio.h>

void cmp_bits(int a, int b){
    int i, j;
    
    for(i = 0; a != 0; a >>=1){
        if (a & 1){
            i++;
        }
    }

    for(j = 0; b != 0; b >>=1){
        if (b & 1){
            j++;
        }
    }

    if(i > j){
        printf("1");
    }

    else if(j > i){
        printf("-1");
    }
    else{
        printf("0");
    }
}

int main(){
    int num1, num2;
    scanf("%i\n", &num1);
    scanf("%i", &num2);
    cmp_bits(num1, num2);
}