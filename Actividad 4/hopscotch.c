#include<stdio.h>

void hostpotch(int num){
    int hop = 1;
    for(int i = 1; i <= hop; i++){
        hop = 1+3*(num);
        if(i % 3 == 1){
            printf("   %i\n", i);
        }
        else if( i % 3 == 0){
            printf("     %i\n", i);
        }
        else{
            printf("%i", i);
        }
    }
}

int main(){
    int n;
    scanf("%i", &n);
    hostpotch(n);
}