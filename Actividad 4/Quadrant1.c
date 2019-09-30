#include<stdio.h>

void quadrant(signed  x, signed y){
    if(x > 0.0 && y > 0.0){
        printf("1");
    }
    else if(x > 0.0 && y < 0.0){
        printf("4");
    }
    else if( x < 0.0 && y < 0.0){
        printf("3");
    }
    else if(x < 0.0 && y > 0.0){
        printf("2");
    }
    else{
        printf("0");
    }
}

int main(){
    signed x1, x2;
    scanf("%f\n", &x1);
    scanf("%f", &x2);
    quadrant(x1, x2);
}
