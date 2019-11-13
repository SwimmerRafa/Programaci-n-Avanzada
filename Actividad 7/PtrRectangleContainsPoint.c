#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
	int width;
	int height;
}Rectangle;

typedef struct Point2D{
	int X;
	int Y;
}Point2D;

int rectangleContainsPoint(const Rectangle* const rect,  const Point2D* const vect){
	int resultX, resultY;

	resultX = rect->x + rect->width;
	resultY = rect->y + rect->height;

	if ((vect->X <= resultX && vect->X >= rect->x) && (vect->Y <= resultY && vect->Y >= rect->y)){	
			return 1;
	}else{
		return 0;
	}
	
}

int main(){
	Rectangle *rec = malloc(sizeof(Rectangle));
	Point2D *vec = malloc(sizeof(Point2D));

	int x, y, h, w, xv, yv;

	scanf("%d\n%d\n%d\n%d\n%d\n%d", &x, &y, &h, &w, &xv, &yv);

	rec->x = x;
	rec->y = y;
	rec->height = h;
	rec->width = w;

	vec->X = xv;
	vec->Y = yv;

	printf("%d",rectangleContainsPoint(rec, vec)); 
	free(rec);
	free(vec);
}