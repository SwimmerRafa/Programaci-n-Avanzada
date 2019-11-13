#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>
#include<math.h>

typedef struct {
    int x;
    int y;
    int z;
}Point3D;

double euclideanDistance(const Point3D * const vect1, const Point3D * const vect2){

    double distance;
    Point3D * result = malloc(sizeof(Point3D));

    result->x = pow((vect2->x - vect1->x), 2);
    result->y = pow((vect2->y - vect1->y), 2);
    result->z = pow((vect2->z - vect1->z), 2);

    distance = sqrt(result->x + result->y + result->z);

    return distance;

}

int main(){

    Point3D * vec1 = malloc(sizeof(Point3D));
    Point3D * vec2 = malloc(sizeof(Point3D));
    int n1, n2, n3, n4, n5, n6;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5, &n6);

    vec1->x = n1;
    vec1->y = n2;
    vec1->z = n3;

    vec2->x = n4;
    vec2->y = n5;
    vec2->z = n6;

    printf("%.2f", euclideanDistance(vec1, vec2));
    free(vec1);
    free(vec2);
}