#include<stdio.h>
#include<math.h>

void swapBits(unsigned int n, unsigned int pos1, unsigned int pos2){
    unsigned int first = pow(2, pos1);
    unsigned int last = pow(2, pos2);

    first ^= n;
    last ^= first;

    printf("%u", last);
}

int main(){
    int num, p1, p2;
    
    scanf("%i\n", &num);
    scanf("%i\n", &p1);
    scanf("%i", &p2);

    swapBits(num, p1, p2);
}