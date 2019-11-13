#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct {
    signed  x;
    signed  y;
}Point2D;

Point2D * swapAndNegate(const Point2D * const vect1){
    
    Point2D * result = malloc(sizeof(Point2D));
    result->x = -(vect1->y);
    result->y = -(vect1->x);

    return result;
}

int main(){
    Point2D * vec = malloc(sizeof(Point2D));

    signed a, b;
    scanf("%d\n%d", &a, &b);

    vec->x = a;
    vec->y = b;

    Point2D * result = swapAndNegate(vec);

    printf("%i\n%i", result->x, result->y);
    free(vec);
    free(result);
}