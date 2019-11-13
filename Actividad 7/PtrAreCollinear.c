#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct {
    int  x;
    int  y;
}Point2D;

double computeSlope(const Point2D * const vect1, const Point2D * const vect2){
    double slope;

    slope = (vect2->y - vect1->y) / (vect2->x - vect1->x);

    return slope;

}

int areCollinear(const Point2D * const vect1, const Point2D * const vect2, const Point2D * const vect3){
    double slope1, slope2;

    slope1 = computeSlope(vect1, vect2);
    slope2 = computeSlope(vect2, vect3);

    if(slope1 != slope2){
        return 0;
    }else{
        return 1;
    }
}

int main(){
	Point2D* vec1 = malloc(sizeof(Point2D));
	Point2D* vec2 = malloc(sizeof(Point2D));
	Point2D* vec3 = malloc(sizeof(Point2D));

    double a, b, c, d, e, f;    
    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &a, &b, &c, &d, &e, &f);

    vec1->x = a;
    vec1->y = b;

    vec2->x = c;
    vec2->y = d;

    vec3->x = e;
    vec3->y = f;

	printf("%d",areCollinear(vec1, vec2, vec3)); 

	free(vec1);
	free(vec2);
	free(vec3);
}