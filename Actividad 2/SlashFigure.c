#include<stdio.h>

int main(){

    int m = 6;
    int n = 0;

    for(int i = m; i >= 1; i--){
        for(int j = i; j <m; j++){
            printf("\\\\");
        }

        for(int k = 0; k <= (4 * i - 3); k++){
            printf("!");
        }
        for(int a = 0; a < n; a++){
            printf("/");
        }
        n = n+ 2;
        printf("\n");
    }
}