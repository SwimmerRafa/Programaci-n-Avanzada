#include<stdio.h>

int main(){
    for(int i = 1; i <=40; i++){
        printf("-");
    }printf("\n"); 
    for(int i = 1; i <=10; i++){
        printf("_-^-");
    }printf("\n");
    for(int i = 0; i < 2; i++){
        for(int j = 1; j<10; j++){
            printf("%d%d", j, j);
        }printf("00");
    }printf("\n");
    for(int i = 1; i <=40; i++){
        printf("-");
    }
}