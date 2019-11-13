#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	int x;
	int y;
	int width;
	int height;
}Rectangle;

Rectangle * intersectRectangle(const Rectangle* const rect1, const Rectangle* const rect2){
	int resultX, resultY, resultW, resultH;

	if (rect1->x > rect2->x){	
		resultX = rect1->x;
	}else{
	    resultX = rect2->x;
	}
	if (rect1->y > rect2->y){	
		resultY = rect1->y;
	}else{
		resultY = rect2->y;
	}
	if (rect1->x + rect1->width > rect2->x + rect2->width){	
		resultW = rect2->x + rect2->width - rect1->x;
	}else{
		resultW = rect1->x + rect1->width - rect2->x;
	}
	if (rect1->y + rect1->height > rect2->y + rect2->height){	
		resultH = rect2->y + rect2->height - rect1->y;
	}else{
		resultH= rect1->y + rect1->height - rect2->y;
	}

	Rectangle* inters=(Rectangle*)malloc(sizeof(Rectangle));
	inters->x= resultX;
	inters->y= resultY;
	inters->width= resultW;
    inters->height= resultH;

	return inters;

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

  	Rectangle *inter = intersectRectangle(rec1,rec2);
  	free(rec1);
  	free(rec2);

  	printf("%d\n%d\n%d\n%d",inter->x, inter->y, inter->width, inter->height); 
  	free(inter); 
}