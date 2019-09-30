#include<stdio.h>

int main(){

    int asteriscos_internos = 14;
    int asteriscos_externos = 0;
    int dolares = 7;

    for(int i = 0; i < 7;i++){
        for(int a = 1; a <= asteriscos_externos; a++){
            printf("*");
        }
        for(int b = 1; b<= dolares; b++){
            printf("$");
        }
        for(int c = 1; c <= asteriscos_internos; c++){
            printf("*");
        }
        for(int d= 1; d <= dolares; d++){
            printf("$");
        }
        for(int e= 1; e <= asteriscos_externos; e++){
            printf("*");
        }

        asteriscos_externos = asteriscos_externos + 2;
        dolares = dolares-1;
        asteriscos_internos = asteriscos_internos -2;
        printf("\n");
    }
}