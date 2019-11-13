#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
	int width;
	int height;
}Rectangle;

Rectangle* RectangleUnion(const Rectangle* const rec1, const Rectangle* const rec2){
	int x,y,w,h;

	if (rec1->x < rec2->x){	
		x = rec1->x;
	}else{
		x = rec2->x;
	}

	if (rec1->y < rec2->y){	
		y = rec1->y;
	}else{
		y = rec2->y;
	}

	if (rec1->x + rec1->width < rec2->x + rec2->width){	
		w = rec2->x + rec2->width - rec1->x;
	}else{
		w = rec1->x + rec1->width - rec2->x;
	}

	if (rec1->y + rec1->height < rec2->y + rec2->height){	
		h = rec2->y + rec2->height - rec1->y;
	}else{
		h = rec1->y + rec1->height - rec2->y;
	}
	
	Rectangle* unionR = malloc(sizeof(Rectangle));
	unionR->x = x;
	unionR->y = y;
	unionR->width = w;
	unionR->height = h;

	return unionR;
}

int main(){
	Rectangle *rec1 = malloc(sizeof(Rectangle));
	Rectangle *rec2 = malloc(sizeof(Rectangle));

	int x, y, w, h, x2, y2, w2, h2;

	scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",&x, &y, &w, &h, &x2, &y2, &w2, &h2);
	
	rec1->x = x;
	rec1->y = y;
	rec1->height = h;
	rec1->width = w;

	rec2->x = x2;
	rec2->y = y2;
	rec2->height = h2;
	rec2->width = w2;

	Rectangle *result = RectangleUnion(rec1,rec2);
    free(rec1);
	free(rec2);

	printf("%d\n%d\n%d\n%d",result->x, result->y, result->width, result->height); 
	free(result);
}