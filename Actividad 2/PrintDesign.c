#include<stdio.h>

void printD(){
    int m= 5;
    int n=1;

    for(int i = 0; i < 5;i++, m--, n += 2){
        for(int j = 0; j < m; j++){
            printf("-");
        }

        for(int j2=0; j2<n; j2++){
            printf("%i", n);
        }

        for(int i2= 0; i2 < m; i2++){
            printf("-");
        }

        printf("\n");

    }
}

int main(void){
    printD();
    return 0;
}