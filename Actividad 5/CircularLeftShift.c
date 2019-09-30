    #include<stdio.h>

int circular_left_shift(unsigned int n, unsigned int p) {
    for(int i = 0; i < p; i++){
        unsigned int last = 1<<31 & n;
        unsigned int first = last >> 31;
        n <<= 1;
        n |= first;
    }
    return n;
}

int main(){
    unsigned int num1, num2;
    scanf("%u\n", &num1);
    scanf("%u", &num2);
    printf("%u", circular_left_shift(num1,num2)); 
}

