#include<stdio.h>

void printTriangleType (int x, int y, int z){
    if(x==y && x==z && y==z){
        printf("equilateral");
    }
    else if(x != y && x != z && y != z){
        printf("scalene");
    }
    else{
        printf("isosceles");
    }
}

int main(){
    int x1, x2, x3;
    scanf("%i\n", &x1);
    scanf("%i\n", &x2);
    scanf("%i", &x3);
    printTriangleType(x1,x2, x3);
}