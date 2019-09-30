#include <stdio.h>

int zeroDigits(int num) {
    int count = 0; 
    do {
        if (num % 10 == 0) {
            count++;
        }
        num /= 10;
    } while (num > 0);
    
    printf("%i", count);
}

int main(){
    int n;
    scanf("%i", &n);
    zeroDigits(n);
    }


      