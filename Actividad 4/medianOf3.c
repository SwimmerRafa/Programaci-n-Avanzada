#include<stdio.h>

int main(){
    int n1, n2, n3;

    scanf("%i\n", &n1);
    scanf("%i\n", &n2);
    scanf("%i", &n3);

    if((n1 < n2 && n1 > n3) || (n1 > n2 && n1 < n3)){
        printf("%i", n1);
    }
    else if((n2 < n1 && n2 > n3) || (n2 > n1 && n2 < n3)){
        printf("%i", n2);
    }
    else{
        printf("%i", n3);
    }
    
}