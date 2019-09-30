#include<stdio.h>

void printGrid(int rows, int cols){
    for(int i = 1; i <= rows; i++){
        int finish = i + rows * (cols - 1);
        for (int j = i; j <= finish; j += rows){
            printf("%i", j);
            if(j != finish){
                printf(", ");
            }
        }
        printf("\n");
    }
}

int main(){
    int r, c;
    scanf("%i\n", &r);
    scanf("%i", &c);
    printGrid(r, c);
}