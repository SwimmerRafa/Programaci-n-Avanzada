#include<stdio.h>

void xo (int size){
    int copyS = size;
    for(int i = 1; i <= size; i++){
        for(int j = 1; j<= size; j++){
            if(j == i || j==copyS){
                printf("x");
            }
            else{
                printf("o");
            }
            
        }
        copyS--;
        printf("\n");
    }
}

int main(){
    int s;
    scanf("%i", &s);
    xo(s);
}