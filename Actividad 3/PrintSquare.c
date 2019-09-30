#include<stdio.h>

void printSquare(int min, int max){
   int dif = max - min;
   for(int i = 0; i <= dif; i++){
       for(int j = 0; j <= dif; j++){
           printf("%i", ((j+i)%(dif+1)+ min));
       }
       printf("\n");
   }
}

int main(){
    int n, m;

    scanf("%i\n", &n);
    scanf("%i", &m);
    printSquare(n, m);
}