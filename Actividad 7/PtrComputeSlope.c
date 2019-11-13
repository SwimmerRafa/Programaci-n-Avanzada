#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct {
    double  x;
    double  y;
}Point2D;

double computeSlope(const Point2D * const vect1, const Point2D * const vect2){
    double slope;

    slope = (vect2->y - vect1->y) / (vect2->x - vect1->x);

    return slope;

}
    
int main(){
    Point2D * vec1 = malloc(sizeof(Point2D));
    Point2D * vec2 = malloc(sizeof(Point2D));
    double a, b, c, d;    
    scanf("%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d);

    vec1->x = a;
    vec1->y = b;

    vec2->x = c;
    vec2->y = d;

    printf("%.1lf", computeSlope(vec1, vec2));
    free(vec1);
    free(vec2);
}

