#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct {
    signed  x;
    signed  y;
}Point2D;


Point2D * quadrant(const Point2D * const vect1){
    Point2D * result = malloc(sizeof(Point2D));
    int quadrA= 0;

    result->x = vect1->x;
    result->y = vect1->y;

    if(result->x > 0.0 && result->y > 0.0){
        quadrA = 1;
    }
    else if(result->x < 0.0 && result->y > 0.0){
        quadrA = 2;
    }
    else if(result->x < 0.0 && result->y < 0.0){
        quadrA = 3;
    }
    else if(result->x > 0.0 && result->y < 0.0){
        quadrA = 4;
    }
    else{
        quadrA = 0;
    }

    return quadrA;
    
}

int main(){
    Point2D * result = malloc(sizeof(Point2D));

    signed a, b;
    scanf("%d\n%d", &a, &b);

    result->x = a;
    result->y = b;

    printf("%i", quadrant(result));
    free(result);
}